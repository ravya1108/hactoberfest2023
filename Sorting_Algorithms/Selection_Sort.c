//Selection Sort

/* 
Time Complexity
    Best  Case : O(n^2)
    Worst Case : O(n^2)
*/

#include<stdio.h>

void Selection(int*,int);
void swap(int *a, int *b);
void print(int*,int);

int main()
{
	int i;
    int arr[] = {-9,0,115,25,34,325,90,13,62,17};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("\n\nElements in the Array\n\n");
    for(i = 0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }

    Selection(arr,n);
    print(arr,n);

    return 0;
}


void Selection(int arr[], int n)
{
	int i,j;
    for(i = 0; i < n-1; i++)
    {
        int min = i;
        for(j = i+1; j<n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            swap(&arr[i],&arr[min]);
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
