#include<stdio.h>
#include <stdlib.h>

void insertionsort(int* arr,int n){
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
	printf("\nThe sorted array is :-");
	for(k=0;k<n;k++){
		printf("\n%d",*(arr+k));
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
	/*printf("\nThe elements entered are :-");
	for(i=0;i<n;i++){
		printf("\n%d",*(arr+i));
	}*/
	insertionsort(arr,n);


}
