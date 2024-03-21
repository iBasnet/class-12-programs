#include <stdio.h>
int main()
{
    int n, s = 0, r, z;
    printf("Enter any number: ");
    scanf("%d", &n);
    z = n;
    while (n != 0)
    {
        r = n % 10;
        // s = s + pow(r, 3);
        s = s + r * r * r;
        n = n / 10;
    }
    if (z == s)
    {
        printf("%d is armstrong", z);
    }
    else
    {
        printf("%d is not armstrong", z);
    }
    return 0;
}