//Merge Sort

/* 
Time Complexity
    Best  Case 	 : O(n*logn)
    Average Case : O(n*logn)
    Worst Case 	 : O(n*logn)
*/

#include<stdio.h>

void MergeSort(int*,int,int);
int Merge(int*,int ,int,int);
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

    MergeSort(arr,0,n-1);		//arr, lower_bound , upper_bound
    print(arr,n);

    return 0;
}

void MergeSort(int arr[],int lb, int ub)
{
	if(lb < ub)
	{
		int mid = lb + (ub - lb)/2;
		MergeSort(arr,lb,mid);		//0 to mid
		MergeSort(arr,mid+1,ub);	//mid to n-1
		Merge(arr,lb,mid,ub);		//arr , lb to mid , mid+1 to ub
	}	
} 

int Merge(int arr[],int lb , int mid, int ub)
{
	int b[ub];
	int i = lb, j = mid+1, k = lb;
	
	while(i <= mid && j <= ub)
	{
		if(arr[i] <= arr[j])
		{
			b[k] = arr[i];
			i++;	
		}
		else
		{
			b[k] = arr[j];
			j++;
		}
	k++;
	}
	
	if(i > mid)
	{
		while(j <= ub)
		{
			b[k] = arr[j];
			j++;
			k++;
		}
	}
	
	else
	{
		while(i <= mid)
		{
			b[k] = arr[i];
			i++;
			k++;
		}
	}
	
	for(k = lb; k <= ub; k++)
	{
		arr[k] = b[k];
	}
	
}


void print(int arr[],int n)
{
	int i;
    printf("\n\nArray after Sorting\n\n");
    for(i = 0; i<n; i++)
        printf("%d\t",arr[i]);
}
