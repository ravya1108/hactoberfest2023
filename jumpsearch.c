#include<stdio.h>
#include<math.h>
#define MAX_SIZE 100
int min(int a, int b){
	if(b>a)
	return a;
	else
	return b;
}
int jumpsearch(int arr[], int x, int n)
{
	int step = sqrt(n);

	int prev = 0;
	while (arr[min(step, n)-1] < x)
	{
		prev = step;
		step += sqrt(n);
		if (prev >= n)
			return -1;
	}

	while (arr[prev] < x)
	{
		prev++;

		if (prev == min(step, n))
			return -1;
	}

	if (arr[prev] == x)
		return prev;

	return -1;
}
int main()
{
	int arr[MAX_SIZE];
	int i,x,m;
	printf("\nSIZE:");
	scanf("%d",&m);
	printf("\nElements");
    for(i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
	printf("\nElement to Search:");
	scanf("%d",&x);
	int n = sizeof(arr)/sizeof(arr[0]);
	int index = jumpsearch(arr, x, n);
	if(index >= 0)
	printf("Number is at %d index",index);
	else
	printf("Number is not exist in the array");
	return 0;
}