#include <stdio.h>
#include <stdlib.h>
	struct node{
		int data;
		struct node *link;

	};

	struct node* rear=NULL;
	struct node* top=NULL;

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
			struct node* p;
			p=rear;
			while(p->link!=NULL){
				p=p->link;
			}
			p->link=temp;
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

	void display(){
		struct node* ptr;
		ptr=rear;
		while(ptr!=NULL){
			printf("%d ", ptr->data);
			ptr=ptr->link;
		}
	}

	void main(){
		int ch;
		while(1){
			printf("\n1-PUSH");
			printf("\n2-POP");
			printf("\n3-Display");
			printf("\n4-EXIT");
			printf("\nENTER CHOICE :  ");
			scanf("%d",&ch);

			switch(ch){
				case 1: push();
				break;
				case 2: pop();
				break;
				case 3: display();
				break;
				case 4: exit(0);
				break;
			}
		}
	}