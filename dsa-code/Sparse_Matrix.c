#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, r, c, count = 0, size = 0;
    printf("\nEnter the number of rows: ");
    scanf("%d", &r);
    printf("\nEnter the number of columns: ");
    scanf("%d", &c);
    int **arr;
    arr = (int **)malloc(r * sizeof(int *));
    for (i = 0; i < r; i++)
    {
        arr[i] = (int *)malloc(c * sizeof(int));
    }
    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nElements are:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count > ((r * c) / 2))
    {
        printf("\nMatrix is a sparse matrix \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (arr[i][j] != 0)
                {
                    size++;
                }
            }
        }

        int compactMatrix[size + 1][3];
        compactMatrix[0][0] = r;
        compactMatrix[0][1] = c;
        compactMatrix[0][2] = size;
        int k = 1;
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                if (arr[i][j] != 0)
                {
                    compactMatrix[k][0] = i;
                    compactMatrix[k][1] = j;
                    compactMatrix[k][2] = arr[i][j];
                    k++;
                }
        printf("\nRow\tColumn\tValue\n");
        for (int i = 0; i < size + 1; i++)
        {
            for (int j = 0; j < 3; j++)
                printf("%d\t", compactMatrix[i][j]);

            printf("\n");
        }
    }
    else
    {
        printf("\nMatrix is not sparse matrix\n");
    }
    for (i = 0; i < r; i++)
    {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
