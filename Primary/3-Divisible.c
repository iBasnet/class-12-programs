// exactly divisible by 5 but not by 7
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 7 != 0)
        printf("%d is exactly divisible by 5 but not by 7.\n", num);
    else
        printf("%d is either not divisible by 5 or divisible by 7.\n", num);

    return 0;
}
