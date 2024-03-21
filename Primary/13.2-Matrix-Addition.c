// input 3x3 matrix and perform matrix addition
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("Enter 9 numbers:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d%d", &a[i][j], &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");
    }
    printf("Added matrix is: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("% d \t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}