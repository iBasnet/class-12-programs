#include <stdio.h>
int main()
{
    int i, num, c = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            c = c + 1;
    }
    if (c == 2)
        printf("The number is PRIME");
    else
        printf("The number is COMPOSITE");
    return 0;
}