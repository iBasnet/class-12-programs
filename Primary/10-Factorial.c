// factorial using recursive function
#include <stdio.h>
int fact(int);
int main()
{
    int n, f;
    printf("Enter any number: ");
    scanf("%d", &n);
    f = fact(n);
    printf("The factorial is %d", f);
    return 0;
}
int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return (n * fact(n - 1));
}