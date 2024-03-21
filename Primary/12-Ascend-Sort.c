#include <stdio.h>
int main()
{
    int a[10], temp;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number #%d: ", i + 1);
        scanf("%d", &a[i]);
    }
    // Bubble Sort
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j]) // (a[i] < a[j]) // for descending
            // for ascending, the first value must be smaller
            // since the first value is greater in this case
            // swapping it with the second value
            {
                temp = a[i]; // copying greater value
                a[i] = a[j]; // swapping values
                a[j] = temp; // pasting greater value
            }
        }
    }
    printf("Numbers in ascending order:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}