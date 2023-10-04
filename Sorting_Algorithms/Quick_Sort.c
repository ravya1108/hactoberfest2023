//Quick Sort

/* 
Time Complexity
    Best  Case 	 : O(n*logn)
    Average Case : O(n*logn)
    Worst Case 	 : O(n^2)
*/

#include<stdio.h>
void QuickSort(int*,int,int);
int Partition(int*,int ,int);
void print(int*,int);
void swap(int*,int*);

int main()
{
    int i;
    int arr[] = {-9,0,115,25,34,325,90,13,62,17};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("\n\nElements in the Array\n\n");
    for(i = 0; i<n; i++)
        printf("%d\t",arr[i]);
        
    QuickSort(arr, 0, n - 1);
    print(arr, n);
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
    printf("\n\nArray after Sorting\n\n");
    for(i = 0; i<n; i++)
        printf("%d\t",arr[i]);
}

int Partition(int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb + 1;
    int end = ub;
    int temp;

    do
    {
        while (arr[start] <= pivot)
        {
            start++;
        }

        while (arr[end] > pivot)
        {
            end--;
        }

        if (start < end)
        {
			swap(&arr[start],&arr[end]);
        }
    } while (start < end);

    // Swap A[low] and A[j]
    swap(&arr[lb],&arr[end]);
    
    return end;
}

void QuickSort(int arr[], int lb, int ub)
{
    int pi; // Index of pivot after partition

    if (lb < ub)
    {
        pi = Partition(arr, lb, ub); 
        QuickSort(arr, lb, pi - 1);  // sort left subarray 
        QuickSort(arr, pi + 1, ub); // sort right subarray
    }
}


