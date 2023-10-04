// Heap Sort (Min) Descending Order Sorting

/* 
Time Complexity
     Overall :	O(nlogn)
     for creating and building heap: O(n)
*/

#include<stdio.h>

void heapSort(int*, int);
void heapify(int*, int, int);
void swap(int*, int*);
void print(int*, int);

int main()
{
    int arr[] = {-9,0,115,25,34,325,90,13,62,17};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("\n\nElements in the Array\n\n");
    	print(arr,n);
	
	heapSort(arr,n);
	
	printf("\n\nArray after Sorting\n\n");
		print(arr,n);
	
	return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int arr[],int n)
{
	int i;
    for(i = 0; i<n; i++)
        printf("%d\t",arr[i]);
}

void heapify(int arr[], int n, int i)
{
	int small = i;
	int l = 2 * i + 1;	//left child
	int r = 2 * i + 2;	//right child
	
	if(l<n && arr[l] < arr[small])	//if left child is smaller than root
		small = l;
	if(r<n && arr[r] < arr[small])	//if right child is smaller than root
		small = r;
		
	if(small != i)					//if lar is not root
	{
		swap(&arr[i],&arr[small]);
		heapify(arr,n,small);			//recursive call for affected subtree
	}
}

void heapSort(int arr[], int n)
{
	int i;
	for(i = n/2 -1 ; i>=0; i--)		//building heap (rearranging array)
		heapify(arr,n,i);		//arr,size,lastindex
		
	for(i = n -1 ; i>0; i--)
	{
		//move current root to end
		swap(&arr[0],&arr[i]);
		
		//again calling heapify for reduced heap
		heapify(arr,i,0);
	}
}
