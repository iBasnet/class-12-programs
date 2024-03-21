// pointers in C
#include <stdio.h>
int main()
{
    int age = 10;
    int *a;
    a = &age;
    printf("Value of age is %d\n", age);
    // Value of age is 10
    printf("Address of age is %d\n", &age);
    // Address of age is 6422296
    printf("Value of age is %u\n", *a);
    // Value of age is 10
    printf("Address of age is %u\n", a);
    // Address of age is 6422296
    return 0;
}
// [%u]: unsigned integer format specifier
// prints the address to which pointer points in C