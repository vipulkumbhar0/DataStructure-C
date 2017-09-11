/*Author @Tanumoy Nandy. 
Subject to Copy right. 
Give due credit in Paytm before copying, 
else legal action will follow!
LMAO please nigga!
Follow tmoynandy @ www.github.com for more Datastructure problems */


#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>

struct node{
	int roll;
	char name[100];
	int sub1;
	int sub2;
	int sub3;
	
	struct node *link;
};
struct node* root=NULL;

int arr[100];

/*struct node1{
	int total;
	int percent;
	struct node1 *link;
};
struct node1* root1=NULL;*/

void insertData(){
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));

	char str[100];
	int sum=0;
	int perc=0;

	char pass[5]="PASS";
	char fail[5]="FAIL";

	printf("\nEnter Student Roll: ");
	scanf("%d",&temp->roll);
	printf("\nEnter Student Name: ");
	scanf("%s",str);
	strcpy(temp->name,str);
	printf("\nSubject 1 marks: ");
	scanf("%d",&temp->sub1);
	printf("\nSubject 2 marks: ");
	scanf("%d",&temp->sub2);
	printf("\nSubject 3 marks: ");
	scanf("%d",&temp->sub3);

	/*printf("\nroll : %d",temp->roll);
	printf("\nname : %s",temp->name);
	printf("\nmarks 1 : %d",temp->sub1);
	printf("\nmarks 1 : %d",temp->sub2);
	printf("\nmarks 1 : %d",temp->sub3);*/

	

	temp->link=NULL;

	if(root==NULL){
		root=temp;
	}

	else{
		struct node* ptr=root;
		while(ptr->link!=NULL){
			ptr=ptr->link;
		}
		ptr->link=temp;
	}
}

int size(){
	int count=0;
	struct node* ptr=root;
	while(ptr!=NULL){
		count++;
		ptr=ptr->link;
	}
	return count;
}

/*void insertionsort(int* arr,int n){
	int j,i,key,k;
	for(j=1;j<n;j++){
		i=j-1;
		key=*(arr+j);
		while(i>=0 && *(arr+i)>key){
			*(arr+i+1)=*(arr+i);
			 i--;
		}
	*(arr+i+1)=key;
	}
	printf("\nTop 3 students are :-");
	for(k=0;k<n;k++){
		printf("\n%d",*(arr+k));
	}
}*/

/*void insertion(){
	int n,i=0;
	n=size();
	int *arr;
	arr=malloc(n*sizeof(int));
	struct node* ptr=root;
	while(ptr!=NULL){
		*(arr+i)=ptr->totalM;
		i++;
		ptr=ptr->link;
	}


	insertionsort(arr,n);
}
*/

void calc(){
	struct node* ptr=root;
	int sum=0,pcounter=0,fcounter=0;
	while(ptr!=NULL){
		sum=sum+ptr->sub1+ptr->sub2+ptr->sub3;
		printf("\nRoll - %d",ptr->roll);
		printf("\nName -%s",ptr->name);
		printf("\nMarks -%d",sum);
		if(sum<120){
			printf("\nStatus - FAIL");
			fcounter++;
		}
		else{
			printf("\nStatus - PASS");
			pcounter++;
		}
		printf("\n\n\n--------------------------------------");
		ptr=ptr->link;

	}

	
	printf("\n--------------------------------------");
	printf("\nTotal Failures - %d",fcounter);
	printf("\nTotal Pass - %d",pcounter);
	printf("\n\n--------------------------------------");
	printf("\n--------------------------------------");

}

void display(){
	struct node* ptr=root;
	while(ptr!=NULL){
		printf("\nroll : %d",ptr->roll);
		printf("\nname : %s",ptr->name);
		printf("\nmarks 1 : %d",ptr->sub1);
		printf("\nmarks 1 : %d",ptr->sub2);
		printf("\nmarks 1 : %d",ptr->sub3);
		ptr=ptr->link;
		printf("\n\n");
	}
}


void main(){
	int ch;
	while(1){
		printf("\n1-insert ");
		printf("\n2-Display Details [Student Details] ");
		printf("\n3-Calculate Marks,Percentage of students");
		printf("\nEXIT");
		printf("\nEnter choice : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:insertData();
			break;
			case 2:display();
			break;
			case 3:calc();
			break;
			case 4:printf("\nPHEKOV\n");
				   exit(0);
		    break;
		}
	}
}


