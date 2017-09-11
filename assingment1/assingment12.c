/*Athor @Tanumoy Nandy. 
Subject to Copy right. 
Give due credit in Paytm before copying, 
else legal action will follow!
LMAO please nigga!
Follow tmoynandy @ www.github.com for more Datastructure problems */

#include<stdio.h>
#include <stdlib.h>
	void push();
	void display();
	void pop();
	struct node
	{
		int data;
		struct node* link;
	};

	struct node* top=NULL;

	void push(){
		
		struct node* temp;
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter data");
		scanf("%d",&temp->data);
		temp->link=NULL;
		if(top==NULL){
			top=temp;
		}
		else{
			temp->link=top;
			top=temp;
		}
		

		
		

	}

	int size(){
		int count=0;
		struct node* ptr=top;
		while(ptr!=NULL){
			count++;
			ptr=ptr->link;

		}
		return count;

	}


	void display(){
		int i=1,k;
		int j=size();
		struct node* p=top;
		struct node* q=top;
		int  temp=0;
		while(i<j){
			k=1;
			while(k<j){
				q=q->link;
				k++;
			}
			temp=p->data;
			p->data=q->data;
			q->data=temp;
			i++;
			j--;
			p=p->link;
			q=top;

		}

		struct node* ptr=top;
		while(ptr!=NULL){
			printf("\n%d",ptr->data);
			ptr=ptr->link;
		}

		i=1;
		k=0;
		j=size();
		p=top;
		q=top;
		temp=0;

		while(i<j){
			k=1;
			while(k<j){
				q=q->link;
				k++;
			}
			temp=p->data;
			p->data=q->data;
			q->data=temp;
			i++;
			j--;
			p=p->link;
			q=top;

		}

	}

	
	void pop(){
		int counter=1;
		int flag=size();
		
		struct node* temp;
		temp=top;
		printf("\npopped element %d",temp->data);
		top=top->link;
		free(temp);
		

		
		
	}


	void main(){
		
		int ch;
		printf("\nstack operations");
		while(1){
			printf("\n1-push");
			printf("\n2-pop");
			printf("\n3-display in FIFO");
			scanf("%d",&ch);
			switch(ch){
				case 1:push();
				break;
				case 2:pop();
				break;
				case 3:display();
				break;
			}

		}
		
	}

