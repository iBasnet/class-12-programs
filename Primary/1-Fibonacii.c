// fibonacii series using recursive function
#include <stdio.h>
int fibo(int);
int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d, ", fibo(i));
    }
    return 0;
}
int fibo(int i)
{
    if (i == 0)
    {
        return 0;
    }
    if (i == 1)
    {
        return 1;
    }
    return fibo(i - 1) + fibo(i - 2);
}