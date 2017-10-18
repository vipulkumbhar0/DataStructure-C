#include <stdio.h>
#include <stdlib.h>
void linear(int a,int* arr){
	int i;
	int flag=0;
	for (i = 0; i < a;i++)
	{
		if(*(arr+i)==a){
			flag++;
			printf("Element found at position : %d",i);
		}
	
	}

	if (flag==0)
	{
		printf("\nElement not found");
	}

}

	int partition(int* arr, int p, int r){
		int i,j,temp,temp1,x;
		j=p;
		i=j-1;
		x=*(arr+r);
		for(j=p;j<r;j++){
			if(x > *(arr+j)){
				i++;
				temp=*(arr+j);
				*(arr+j)=*(arr+i);
				*(arr+i)=temp;
			}
		}
		temp1=*(arr+i+1);
		*(arr+i+1)=*(arr+r);
		*(arr+r)=temp1;
		return i+1;
	}

	void quicksort(int* arr, int p, int r){
		int q,i;
		if(p<r){
			q=partition(arr,p,r);
			quicksort(arr,p,q-1);
			quicksort(arr,q+1,r);
		}

		
		

	}

	int binary(int*arr,int n,int a){
		int i=0;
		int mid,l,u;
		u=n-1;
		l=0;
		while(l<=u){
			mid=(l+u)/2;
			if(a<*(arr+mid)){
				u=mid-1;
			}
			else if(a>*(arr+mid)){
				l=mid-1;
			}
			else{
				return mid;
			}
		}
		return -1;
	}


void main()
{	
	int n,a,i,pos,ch;
	int* arr;
	printf("\nEnter size of array:");
	scanf("%d",&n);
	arr = (int*) malloc(n * sizeof(int));
	printf("\nEnter elements of array: ");
	for (i = 0; i < n;i++)
	{
		printf("\nEnter element :");
		scanf("%d",arr+i);
	}

	printf("\nEnter element to search :");
	scanf("%d",&a);

	printf("\nEnter 1 for Linear Search \n Enter 2 for Binary search \n Enter choice :");
	scanf("%d",&ch);

	switch(ch){
		case 1: linear(a,arr);
		break;
		case 2: quicksort(arr,0,n-1);
				printf("\nThe sorted array is : ");
				for (i = 0; i < n;i++)
				{
					printf("\n%d",*(arr+i));
				}
					pos=binary(arr,n,a);

				if(pos==-1){
					printf("\nElement not in array");
				}
				else{
					printf("\nElement in %d",pos+1);
					}
				
		break;
	}

	/*linear(a,arr);
	quicksort(arr,0,n-1);
	printf("\nThe sorted array is : ");
	for (i = 0; i < n;i++)
	{
		printf("\n%d",*(arr+i));
	}

	pos=binary(arr,n,a);

	if(pos==-1){
		printf("\nElement not in array");
	}
	else{
		printf("\nElement in %d",pos+1);
	}*/





}

