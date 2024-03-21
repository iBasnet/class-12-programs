// greatest among 10 numbers
#include <stdio.h>
int main()
{
    int num[10];
    int max;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number #%d: ", i + 1);
        scanf("%d", &num[i]);
    }
    // let's assume
    max = num[0];
    for (int i = 1; i < 10; ++i)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    printf("The greatest number is %d", max);
    return 0;
}
