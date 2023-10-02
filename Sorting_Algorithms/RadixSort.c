//Radix Sort

/* 
Time Complexity
   O(d*n+k)		d(no of digit in max element)	n (number of element) k (range)
*/

#include<stdio.h>
#include<limits.h>

void RadixSort(int*, int);
void Counting_Sort(int*, int);
int GetMax(int*, int);
void print(int*, int);

int main()
{
	int i ;
    int arr[] = {432,8,530,90,231,11,45,677,199};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("\n\nElements in the Array\n\n");
    for(i = 0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }

    RadixSort(arr,n);
    print(arr,n);

    return 0;
}

//radix Sort
void RadixSort(int arr[],int n)
{
	int pos;
	int max = GetMax(arr,n);
	
	for(pos = 1; max/pos > 0; pos *= 10)
		CountSort(arr,n,pos);
}

// A function to do counting sort of arr[] according to
// the digit represented by pos.
int CountSort(int arr[],int n, int pos)
{
	int output[n];				//ouput array
	
	//initializing count array to 0
	//array will be of size 10 
	//as digits ranged from 0 - 9 and therfore taking cnt[9+1] //k+1
	int count[10] = {0};			
	int i;
	
	//storing counts of digits at nth pos
	for(i = 0; i < n; i++)
		++count[ ( arr[i] / pos ) % 10 ];
	
	// Change count[i] so that count[i] now contains actual
    //  position of this digit in output[]
    for(i = 1; i < 10; i++)
    	count[i] += count[i-1];
    	
    //Building Output Array
    for(i = n-1; i >= 0; i--)
    	output[--count[ ( arr[i] / pos ) % 10 ]] = arr[i];
    	
    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for(i = 0; i<n; i++)
    	arr[i] = output[i];
    
}

//func to find max value from array
int GetMax(int arr[],int n)
{
	int k = INT_MIN,i = 0;
	int output[n];
	
	for(i = 0; i<n; i++)			//Finding Max element
	{
		if(arr[i] > k)
			k = arr[i];
	}
	return k;
}

//print values of array
void print(int arr[],int n)
{
	int i;
    printf("\n\nArray after Sorting\n\n");
    for(i = 0; i<n; i++)
        printf("%d\t",arr[i]);
}
