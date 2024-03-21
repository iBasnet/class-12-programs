// simple interest using function
#include <stdio.h>
float interest(void); // function declaration
int main()
{
    float si;
    si = interest(); // function call
    printf("Simple interst is %.2f\n", si);
    return 0;
}
float interest() // function definition
{
    float p, t, r, i;
    printf("Enter Principal, Time and Rate: ");
    scanf("%f%f%f", &p, &t, &r);
    i = (p * t * r) / 100;
    return i; // function return value
}