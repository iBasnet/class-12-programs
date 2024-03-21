#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k;

    // Input matrix A
    printf("Enter the elements of matrix A (3x3):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Input matrix B
    printf("Enter the elements of matrix B (3x3):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                ////////////////////////////
                c[i][j] += a[i][k] * b[k][j];
                ////////////////////////////
            }
        }
    }

    // Display the result
    printf("Result of matrix multiplication A * B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
