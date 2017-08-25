#include<stdio.h>
#include<stdlib.h>
	struct node{
		int data;
		struct node *link;
	};
	struct node* root=NULL;

	int size(){
		int count=0;
		struct node* ptr=root;
		while(ptr->link!=root){
			ptr=ptr->link;
			count++;
		}
		count++;
		return count;

	}

	void create(){
		struct node* temp;
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter new node data:");
		scanf("%d",&temp->data);
		temp->link=NULL;
		if(root==NULL){
			root=temp;
			temp->link=root;
		}		
		else{
			struct node* ptr=root;
			while(ptr->link!=root){
				ptr=ptr->link;
			}
			temp->link=root;
			ptr->link=temp;

		}
	}

	void insert(){
		int i,n;
		printf("Enter position after which new node is to be inserted : ");
		scanf("%d",&i);
		n=size();
		if(i==1){
			struct node* temp;
			temp=(struct node*)malloc(sizeof(struct node));
			printf("Enter New node data : ");
			scanf("%d",&temp->data);
			temp->link=NULL;
			temp->link=root;
			root=temp;

		}
		else if(i==n){
			create();


		}
		else{
			int count=0;
			struct node* temp;
			struct node* ptr=root;
			temp=(struct node*)malloc(sizeof(struct node));
			printf("Enter New node data : ");
			scanf("%d",&temp->data);
			temp->link=NULL;
			while(count<i-1){
				ptr=ptr->link;
				count++;
			}
			temp->link=ptr->link;
			ptr->link=temp;



		}
	}

	
	void display(){
		/*int n;
		n=size();
		printf("%d",n);*/
		struct node* ptr=root;
		while(ptr->link!=root){
			printf("\n%d",ptr->data);
			ptr=ptr->link;
		}
		printf("\n%d",ptr->data);
	}

	void delete(){
		int i;
		printf("Enter node for deletion : ");
		scanf("%d",&i);
		n=size();
		if(i==1){
			struct node* temp=root;
			root=root->link;
			temp->link=NULL;
			free(temp);


		}
		else{
			int c1=0,c2=0;
			struct node* ptr1=root;
			struct node* ptr2=root;
			while(c1<i-1){
				ptr1=ptr1->link;
				c1++
			}
			while(c2<i){
				ptr2=ptr2->link;
				c2++;

			}
			ptr1->link=ptr2->link;
			ptr2->link=NULL;
			free(ptr);

		}
	}

	void main(){
		int ch;
		while(1){
			printf("\n1-Create");
			printf("\n2-Insert");
			printf("\n3-Delete");
			printf("\n4-Reverse");
			printf("\n5-Display");
			printf("\n6-Exit");
			printf("\n\nEnter Choice : ");;
			scanf("%d",&ch);
			switch(ch){
				case 1: create();
				break;
				case 2: insert(); 
				break;
				case 3: delete();
				break;
				/*case 4: reverse();
				break;*/
				case 5: display();
				break;
				case 6: exit(0);
				break;
			}
		}
		

	}
