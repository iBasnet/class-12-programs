// reverse of a number
#include <stdio.h>
int main()
{
    int num, rNum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        rNum = rNum * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number: %d\n", rNum);
    return 0;
}
