#include <stdio.h>
#include <stdlib.h>

	struct node{

		int data;
		struct node *left;
		struct node *right;

	};

	struct node* root=NULL;

	int size(){
		int count=0;
		struct node* ptr;
		ptr=root;
		while(ptr!=NULL){
			count++;
			ptr=ptr->right;
			
		}
		// printf("\n%d",count);
		return count;
	}



	void create(){
		struct node* temp;
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter data : ");
		scanf("%d",&temp->data);
		temp->left=NULL;
		temp->right=NULL;
		if(root==NULL){
			root=temp;
		}
		else{
			struct node* ptr;
			ptr=root;
			while(ptr->right!=NULL){
				ptr=ptr->right;
			}
			ptr->right=temp;
			temp->left=ptr;
			
		}
	}

	void display(){
		struct node* ptr;
		ptr=root;
		while(ptr!=NULL){
			printf("%d ",ptr->data);
			ptr=ptr->right;
			
		}
	}

	
	void insert(){
		int n,s,d;
		s=size();
		printf("\nEnter position of node after which to insert : ");
		scanf("%d",&n);
		printf("\nEnter data : ");
		scanf("%d",&d);
		if(n==0){
			struct node* temp;
			temp=(struct node*)malloc(sizeof(struct node));
			temp->data=d;
			temp->right=NULL;
			temp->left=NULL;

			temp->right=root;
			root->left=temp;
			root=temp;


		}
		else if(n==s){
			create();

		}
			else{
				struct node* temp;
				temp=(struct node*)malloc(sizeof(struct node));
				temp->data=d;
				temp->right=NULL;
				temp->left=NULL;

				struct node* ptr=root;
				struct node* ptr1=root;

				int c1=0,c2=0;

				while(c1<n){
					ptr=ptr->right;
					c1++;
				}

				temp->right=ptr;
				ptr->left=temp;

				while(c2<n-1){
					ptr1=ptr1->right;
					c2++;
				}

				temp->left=ptr1;
				ptr1->right=temp;

			}
	}

	void delete(){

		int n,s;
		s=size();
		int c1=0,c2=0;
		printf("\nEnter node for deletion : ");
		scanf("%d",&n);
		if(n==1){
			struct node* ptr;
			ptr=root;
			root=root->right;
			ptr->left=NULL;
			ptr->right=NULL;
			free(ptr);

		}
		else if(n==s){
			c1=1;
			c2=1;

			struct node* ptr1=root;
			struct node* ptr2=root;
			while(c1<n){
				ptr2=ptr2->right;
				c1++;
			}
			while(c2<n-1){
				ptr1=ptr1->right;
				c2++;
			}
			ptr1->right=ptr2->right;
			ptr2->left=NULL;
			ptr2->right=NULL;
			free(ptr2);

		}
		else{
			c1=1;
			c2=1;
			struct node* temp;

			struct node* ptr1=root;
			struct node* ptr2=root;
			while(c1<n){
				ptr2=ptr2->right;
				c1++;
			}
			while(c2<n-1){
				ptr1=ptr1->right;
				c2++;
			}

			ptr1->right=ptr2->right;
			temp=ptr2;
			ptr2=ptr2->right;
			ptr2->left=ptr1;
			temp->right=NULL;
			temp->left=NULL;
			free(temp);

		}
	}

	void reverse(){
		int i=0,j,k,temp;
		struct node* ptr=root;
		struct node* ptr1=root;
		
		j=size()-1;
		while(i<j){
			k=0;
			while(k<j){
				ptr1=ptr1->right;
				k++;

			}

			temp=ptr->data;
			ptr->data=ptr1->data;
			ptr1->data=temp;
			i++;
			j--;
			ptr=ptr->right;
			ptr1=root;
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
			printf("\n\nENTER CHOICE : ");
			scanf("%d",&ch);

			switch(ch){
				case 1: create();
				break;
				case 2: insert();
				break;
				case 3: delete();
				break;
				case 4: reverse();
				break;
				case 5: display();
				break;
				case 6: exit(0);
				break;
			}
		}
	}
