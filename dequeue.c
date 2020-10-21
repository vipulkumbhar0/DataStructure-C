#include<stdio.h>
#include<stdlib.h>

	//Declaration of Dequeue.
	struct node{
		int data;
		struct node *link;
		};
		struct node* rear=NULL;
		struct node* top= NULL;
		
		void create(){
			struct node* temp;
			temp=(struct node*)malloc(sizeof(struct node));
			printf("\nEnter data :");
			scanf("%d",&temp->data);
			temp->link=NULL;
			if(rear==NULL && top==NULL){
				rear=temp;
				top=temp;
				}
				else{
					struct node* ptr=rear;
					while(ptr->link!=NULL){
						ptr=ptr->link;
						}
					ptr->link=temp;
					}
			}

			//To insert item into Dequeue at rear
			void insertend(){
				 create();
				}

			//To insert item into Dequeue at front
			void insertbeg(){
				struct node* temp;
				temp=(struct node*)malloc(sizeof(struct node));
				printf("\nEnter data :");
				scanf("%d",&temp->data);
				temp->link=NULL;
				temp->link=rear;
				rear=temp;
				}
				
			//To delete item from Dequeue at rear.
			void deleteend(){
				struct node* ptr=rear;
				while(ptr->link!=NULL){
					ptr=ptr->link;
					}
				printf("\npopped element is : %d" ,ptr->data);
				free(ptr);
				}

			//To delete item from Dequeue at front.
			void deletefront(){
				struct node* ptr=rear;
				rear=rear->link;
				printf("\npopped element is : %d",ptr->data);
				}

			//To display the items on scrren
			void display(){
				struct node* ptr=rear;
				while(ptr!=NULL){
					printf("\n %d",ptr->data);
					ptr=ptr->link;
					}
				}
		
		void main(){
			int ch;
			while(1){
				printf("\n0-create");
				printf("\n1-push front");
				printf("\n2-push end");
				printf("\n3-delete front");
				printf("\n4- delete end ");
				printf("\n5-display");
				printf("\n\nEnter choice : ");
				scanf("%d",&ch);
				switch(ch){
					case 0: create();
					break;
					case 1: insertbeg();
					break;
					case 2: insertend();
					break;
					case 3: deletefront();
					break;
					case 4: deleteend();
					break;
					case 5: display();
					break;
					}
				}
			}

