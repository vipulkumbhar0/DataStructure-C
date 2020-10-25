//We can find minimum element between a range of query efficiently by segment tree. It preprocess and give results in logn time. It stores minimum value in a range at its nodes.
//*tree -> pointer to the segment tree , qstart -> start of range , qend -> end of range , start -> start index of node , end -> end index of node 
#include <stdio.h> 
#include <math.h>  

//Function to get minimum of two numbers 
int min(int x, int y) { return (x < y)? x: y; } 

//Get the middle index
int getMid(int l, int r) { return l + (r-l)/2; } 

	
int rangequeryiUtil(int *tree, int start, int end, int qstart, int qend, int index) 
{ 
	// If segment of this node is a part of range, then return the min of the segment 
	if (qstart <= start && qend >= end) 
		 return tree[index]; 

	// Outside the given range 
	if (end<qstart || start>qend) 
	    return INT_MAX; 

	// If a range overlaps 
	int mid = getMid(start, end); 
	return min(rangequeryUtil(tree, start, mid, qstart, qend, 2*index+1),rangequeryUtil(tree, mid+1, end, qstart, qend, 2*index+2)); 
} 

 
int rangequery(int *tree, int n, int qstart, int qend) 
{ 
	
	if (qstart < 0 || qend > n-1 || qstart > qend) 
	{ 
		printf("Invalid"); 
		return -1; 
	} 

	return rangequeryUtil(st, 0, n-1, qs, qe, 0); 
} 
 
// sindex is index of current node in segment tree 
int construct(int a[], int start, int end, int *tree, int sindex) 
{ 
	
	if (start == end) 
	{ 
		tree[sindex] = a[start]; 
		return a[start]; 
	} 

	// If more than one elements
	int mid = getMid(start, end); 
	tree[sindex] = min(construct(a, start, mid, tree, sindex*2+1),constructSTUtil(a, mid+1, end, tree, sindex*2+2)); 
	return tree[sindex]; 
} 

//Function to construct segment tree from given array
int *constructTree(int a[], int n) 
{ 

	//Height of segment tree 
	int h = (int)(ceil(log2(n))); 

	// Maximum size of segment tree 
	int maxsize = 2*(int)pow(2, h) - 1; 

	int *tree = new int[max_size]; 

	//Allocate memory to tree  
	construct(a, 0, n-1, tree, 0); 

	// Return the constructed segment tree 
	return tree; 
} 

// Driver program to test above functions 
int main() 
{ 
	int a[] = {3,1,5,7,2}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	// Build segment tree from given array 
	int *tree = construct(a, n); 

	int qstart = 2; // Starting index of query range 
	int qend = 4; // Ending index of query range 

	printf("Minimum of values in range given range is = "rangequery(tree, n, qstart, qend)); 

	return 0; 
} 
