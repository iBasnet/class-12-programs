#include <stdio.h>

int main()
{
    int a[3][3], z[3][3], i, j;

    printf("Enter 9 numbers:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculating transpose
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            z[j][i] = a[i][j];
        }
    }

    // Printing transpose
    printf("Transpose of the matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", z[i][j]);
        }
        printf("\n");
    }

    return 0;
}
