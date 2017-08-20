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

	struct node* top;

	void main()
	{
		
		int ch;
		printf("\nstack operations");
		while(1){
			printf("\n1-push");
			printf("\n2-pop");
			printf("\n3-display");
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
	void display(){
		struct node* ptr;
		ptr=top;
		while(ptr!=NULL){
			printf("\n%d",ptr->data);
			ptr=ptr->link;
		}
	}
	void pop(){
		struct node* temp;
		temp=top;
		printf("\npopped element %d",temp->data);
		top=top->link;
	}
