// area of rectangle using function
#include <stdio.h>
int area(void); // function declaration
int main()
{
    int a;
    a = area(); // function call
    printf("The area is %d", a);
    return 0;
}
int area() // function definition
{
    int l, b, ar;
    printf("Enter length and breadth: ");
    scanf("%d%d", &l, &b);
    ar = l * b;
    return ar; // function return value
}