# include <stdio.h>
#define MAX_SIZE 100
int interpolation(int array_nums[], int array_size, int x)
{
    int lower_pos = 0, higher_pos = array_size - 1;
    while (lower_pos <= higher_pos && x >= array_nums[lower_pos] && x <= array_nums[higher_pos])
    {
        int x_pos = lower_pos + ((x - array_nums[lower_pos]) * (higher_pos - lower_pos)) / (array_nums[higher_pos] - array_nums[lower_pos]);
        if (x > array_nums[x_pos])
            lower_pos = x_pos + 1;
        else if (x < array_nums[x_pos])
            higher_pos = x_pos - 1;
        else  
            return x_pos;
    }
    return -1;
}

int main()
{
    int i,n,x;
    int array_nums[MAX_SIZE];
    printf("\nSIZE:");
	scanf("%d",&n);
	printf("\nElements");
    for(i=0;i<n;i++){
        scanf("%d",&array_nums[i]);
    }
    int array_size = sizeof(array_nums) / sizeof(array_nums[0]);
    printf("Original Array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", array_nums[i]);}
    printf("\nInput a number to search: ");
    scanf("%d", &x); 
    int index = interpolation(array_nums, array_size, x);
    if (index != -1)
        printf("\nElement found at position: %d", index);
    else
        printf("\nElement not found..!");
    return 0;
}