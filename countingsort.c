#include <stdio.h>
#include <stdlib.h>
void counting_sort(int a[], int b[], int k, int n)
{
	int *c = (int*)malloc(sizeof(int)*(1+k));
	int i;
	for(i = 0; i <= k; i++)
	{
		c[i] = 0;
	}
	for(i = 1; i <= n; i++)
	{
		c[a[i]]++;
	}
	for(i = 1; i <= k; i++)
	{
		c[i] = c[i-1]+c[i];
	}
	for(i = 1; i <= n; i++)
	{
		b[c[a[i]]] = a[i];
		c[a[i]]--;
	}
	return;
}
int main(void)
{
	int a[] = {0,1,5,0,12,43,22,13,32};
	int n = sizeof(a)/sizeof(int) - 1;
	int *b = (int*)malloc(sizeof(int)*(n+1));
	int i;
	for(i = 0; i < n; i++)
	{
		b[i] = 0;
	}
	counting_sort(a, b, 43, n);
	for(i = 1; i <= n; i++)
	{
		printf("%d\n", b[i]);
	}
	return 0;
  }
