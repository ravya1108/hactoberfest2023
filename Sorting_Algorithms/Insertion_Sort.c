//Insertion Sort

/* 
Time Complexity
    Best  Case  : O(n)
    Worst Case : O(n^2)
*/

#include<stdio.h>

void Insertion(int*,int);
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

    Insertion(arr,n);
    print(arr,n);

    return 0;
}

void Insertion(int arr[], int n)
{
	int i;
    for(i = 1; i< n; i++)
    {
        int temp = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

}

void print(int arr[],int n)
{
	int i;
    printf("\n\nArray after Sorting\n\n");
    for(i = 0; i<n; i++)
        printf("%d\t",arr[i]);
}
