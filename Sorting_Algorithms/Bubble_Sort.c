//Bubble Sort

/* 
Time Complexity
    Best  Case : O(n)
    Worst Case : O(n^2)
*/

#include<stdio.h>

void BubbleSort(int*,int);
void swap(int *a, int *b);
void print(int*,int);

int main()
{
	int i ;
    int arr[] = {-9,0,115,25,34,325,90,13,62,17};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("\n\nElements in the Array\n\n");
    for(i = 0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }

    BubbleSort(arr,n);
    print(arr,n);

    return 0;
}


void BubbleSort(int arr[], int n)
{
	int i,j;
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }     
    }
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
