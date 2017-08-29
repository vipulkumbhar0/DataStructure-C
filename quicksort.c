#include <stdio.h>
#include <stdlib.h>

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

	void main(){
		int n,i;
		int *arr;

		printf("\nEnter size of array");
		scanf("%d",&n);
		arr=malloc(n*sizeof(int));

		printf("\nENter elements of the array :-");
		for(i=0;i<n;i++){
			printf("\nEnter element no.%d : ",i);
			scanf("%d",arr+i);
		}

		 quicksort(arr,0,n-1);

		 printf("\nThe sorted array is :-");
		for(i=0;i<n;i++){
			printf("\n%d",*(arr+i));
		}
		
	}


