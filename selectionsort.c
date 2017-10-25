#include<stdio.h>
#include<stdlib.h>

void sot(int n,int* arr){
	int i,j,k,temp,pos;
	for(i=0;i<n-1;i++){
		k=*(arr+i);
		pos=i;
		for(j=i+1;j<n;j++){
			if(*(arr+j)<k){
				k=*(arr+j);
				pos=j;
				
				
			}
		}
		temp=*(arr+i);
		*(arr+i)=*(arr+pos);
		*(arr+pos)=temp;

	}

	printf("\nThe sorted array is :-");
	for(k=0;k<n;k++){
		printf("\n%d\n",*(arr+k));
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
	sot(n,arr);


}
