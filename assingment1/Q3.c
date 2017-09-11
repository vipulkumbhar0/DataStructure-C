/*Athor @Tanumoy Nandy. 
Subject to Copy right. 
Give due credit in Paytm before copying, 
else legal action will follow!
LMAO please nigga!
Follow tmoynandy @ www.github.com for more Datastructure problems */


#include <stdio.h>
#include <stdlib.h>

/*QUEUE 1*/
	struct node{
		int data;
		struct node *link;

	};

	struct node* rear=NULL;
	struct node* top=NULL;


	int size(){
		int count=0;
		struct node* ptr=rear;
		while(ptr!=NULL){
			count++;
			ptr=ptr->link;
		}
		return count;

	}

	void push(){
		struct node* temp;
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter new node data : ");
		scanf("%d",&temp->data);
		temp->link=NULL;
		if(rear==NULL){
			rear=temp;
			top=temp;
		}
		else{
			top->link=temp;
			top=temp;
		}
	}

	void pop(){
		struct node* temp;
		temp=rear;
		rear=rear->link;
		printf("\npopped element is %d ",temp->data);
		temp->link=NULL;
		free(temp);
	}

	/*void displayarr(){
		int *arr;
		int n=size();
		a

		
	}*/

	void display(){
		struct node* ptr;
		ptr=rear;
		while(ptr!=NULL){
			printf("%d ", ptr->data);
			ptr=ptr->link;
		}
	}


/*QUEUE 2*/

	struct node1{
		int data;
		struct node1 *link;

	};

	struct node1* rear1=NULL;
	struct node1* top1=NULL;

	int size1(){
		int count=0;
		struct node1* ptr=rear1;
		while(ptr!=NULL){
			count++;
			ptr=ptr->link;
		}
		return count;

	}

	void push1(){
		struct node1* temp;
		temp=(struct node1*)malloc(sizeof(struct node1));
		printf("\nEnter new node data : ");
		scanf("%d",&temp->data);
		temp->link=NULL;
		if(rear1==NULL){
			rear1=temp;
			top1=temp;
		}
		else{
			struct node1* p;
			p=rear1;
			while(p->link!=NULL){
				p=p->link;
			}
			p->link=temp;
			top1=temp;
		}
	}

	void pop1(){
		struct node1* temp;
		temp=rear1;
		rear1=rear1->link;
		printf("\npopped element is %d ",temp->data);
		temp->link=NULL;
		free(temp);
	}

	void display1(){
		struct node1* ptr;
		ptr=rear1;
		while(ptr!=NULL){
			printf("%d ", ptr->data);
			ptr=ptr->link;
		}
	}
    

    void arrDisp(){
    	int *arr;
    	struct node* temp=rear;
    	struct node1* temp1=rear1;
    	int i=0,j=0,n,n1,sz;
    	n=size();
    	n1=size1();
    	sz=n1+n;

    	arr=malloc(sz*sizeof(int));
    	while(i<n){
    		*(arr+i)=temp->data;
    		temp=temp->link;
    		i++;
    	}

    	while(j<n1){
    		*(arr+i+j)=temp1->data;
    		temp1=temp1->link;
    		j++;
    	}

    	printf("\nThe element inside array are : ");

    	for(i=0;i<sz;i++){
    		printf("\n%d",*(arr+i));
    	}


    }


	void main(){
		int ch;
		while(1){
			printf("\n1-PUSH in QUEUE 1");
			printf("\n2-POP in QUEUE 1");
			printf("\n3-Display QUEUE 1");
			printf("\n4-PUSH in QUEUE 2");
			printf("\n5-POP in QUEUE 2");
			printf("\n6-Display QUEUE 2");
			printf("\n7-Display Array");
			printf("\n8-EXIT");
			printf("\nENTER CHOICE :  ");
			scanf("%d",&ch);

			switch(ch){
				case 1: push();
				break;
				case 2: pop();
				break;
				case 3: display();
				break;
				case 4: push1();
				break;
				case 5:pop1();
				break;
				case 6:display1();
				break;
				case 7:arrDisp();
				break;
				case 8:exit(0);
				break;
			}
		}
	}
