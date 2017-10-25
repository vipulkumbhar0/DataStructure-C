#include<stdio.h>
#include<stdlib.h>

void sot(int n,int* arr){
	int i,j,k,temp,pos,flag=0;
	for(i=0;i<n;i++){

		for(j=0;j<n-i-1;j++){

			if(*(arr+j)>*(arr+j+1)){
				temp=*(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j+1)=temp;
				flag++;
				printf("\nstep %d :-",flag);
				for(k=0;k<n;k++){
					printf("\n%d\n",*(arr+k));
				}
			}
						
		}
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
