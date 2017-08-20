#include<stdio.h>
#include<stdlib.h>

    struct node{
        int data;
        struct node *link;
    };
    
    struct node* root=NULL;
    
    int size(){
            int count=0;
            struct node* ptr;
            ptr=root;
        while(ptr!=NULL){
                ptr=ptr->link;
                    count++;
                    }
    printf("\n%d",count);
    return count;
    }

    void display(){
            struct node* p;
            p=root;
            while(p!=NULL){
                    printf("\n%d",p->data);
                    p=p->link;
                    }
    }

    void create(){
            struct  node* temp;
            temp=(struct node*)malloc(sizeof(struct node));
         	printf("\nenter data: ");
            scanf("%d",&temp->data);
	      temp->link=NULL;
            if(root==NULL){
                    root=temp;
            }
            else{
        		struct node* p;
        		p=root;
        		while(p->link!=NULL){
                    	p=p->link;
                    	}
        		p->link=temp;
        		}
    }

    void insert(){
            int count,n,i;
            printf("\nenter node position after which new element will be inserted : ");
            scanf("%d",&i); 
            n=size();
            if(i==0){
                    struct node* temp;
                    temp=(struct node*)malloc(sizeof(struct node));
                    printf("enter new node data :");
	              	scanf("%d",&temp->data);
		            temp->link=root;
                    root=temp;
           }
    		else if(i==n){
            			create();
            }

            else{
                    int count=1;
                    struct node* temp, * ptr;
                    temp=(struct node*)malloc(sizeof(struct node));
                    ptr=root;
                    printf("\nenter new node data : ");
                    scanf("%d",&temp->data);
                    temp->link=NULL;
                    while(count<i){
                            ptr=ptr->link;
                            count++;
                                 }   

                    temp->link=ptr->link;
                    ptr->link=temp;

                }
  
    }

        

	void del(){
        int n;
    	printf("\nenter node for deletion: ");
        scanf("%d",&n);
        if(n==1){
            struct node* temp;
            temp=root;
            root=temp->link;
            temp->link=NULL;
            free(temp);
        }
        else{
            struct node* p=root;
           	struct node* q;
            int i=1;
            while(i<n-1){
                p=p->link;
                i++;
            }
            q=p->link;
            p->link=q->link;
            q->link=NULL;
            free(q);
        }
            

	}
    void reverse(){
        int i,j,k,temp;
        i=1;
        j=size();
        struct node* p=root;
        struct node* q=root;
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
            q=root;
        }
    }

    void search(){
        int n,flag=0,count=0;
        struct node* temp;
        temp=root;
        printf("\nEnter element to be searched: ");
        scanf("%d",&n);
        while(temp->link!=NULL && flag==0){
            if(n==temp->data){
                flag++;

            }
            else{
                temp=temp->link;
            }
            count++;
        }
        if(flag==1){
            printf("\n%d found at %d ",n,count);
        }
        else{
            printf("\nElement not found");
        }

    }

    int  main(){
        int ch;
        while(1){
            printf("\n1-create");
            printf("\n2-insert");
            printf("\n3-display");
            printf("\n4-size");
            printf("\n5-delete");
            printf("\n6-reverse: ");
            printf("\n7-search");
            printf("\n8-sort");
            printf("\n9-EXIT\n");
            printf("ENTER CHOICE : ");
            scanf("%d",&ch);
            switch (ch){
            case 1: create();
            break;
            case 2: insert();
            break;
            case 3: display();
            break;
            case 4: size();
            break;
            case 5: del();
            break;
            case 6: reverse();
            break;
            case 7: search();
            break;
            /*case 8: sort();
            break;*/
            case 9: exit(0);
            break;
                }
        }
    }

