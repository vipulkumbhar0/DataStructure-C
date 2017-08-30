#include<stdio.h>
#include<stdlib.h>
#include<string.h>
	struct node{
	char str[100];
	struct node *link;
	};

	struct node* root=NULL;
	struct node* top=NULL;

	void push(){
		struct node* temp;
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter character:");
		scanf("%s",temp->str);
		temp->link=NULL;
		if(root==NULL){
			root=temp;
			top=temp;
			//printf("\ninserte%s",root->str);
			}
		else{
			temp->link=top;
			top=temp;

			}
	}

	/*void pop(){
	struct node* ptr=top;
	while(ptr!=NULL){
	printf("popped element is : %s " ,ptr->str);
	ptr->link=NULL;
	free(ptr);
	top=top->link;
	ptr=top;
	}

	}*/

	void pop(){
		struct node* ptr=top;
		while(ptr!=NULL){
			printf("%s",ptr->str);
			ptr=ptr->link;
			}
	}


	void main(){
		int ch;
			while(1){
			printf("\n1-push");
			//printf("\n2-display");
			printf("\n2-pop");
			printf("\nenter:");
			scanf("%d",&ch);
			switch(ch){
				case 1: push();
				break;
				case 2: pop();
				break;
				//case 3:pop();
				//break;
				}
			}
	}
