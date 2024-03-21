// WAP using structure to store data of n students
#include <stdio.h>
int main()
{
    int i, n;
    printf("How many students? -> ");
    scanf("%d", &n);

    struct student
    {
        char name[30];
        int class;
        float marks;
    } std[n];

    // taking input
    for (i = 0; i < n; i++)
    {
        printf("Enter Name -> ");
        scanf("%s", std[i].name);
        printf("Enter Class -> ");
        scanf("%d", &std[i].class);
        printf("Enter Marks -> ");
        scanf("%f", &std[i].marks);
    }
    // giving output
    for (i = 0; i <= n; i++)
    {
        printf("Student #%d:\n%s\t%d\t%f\n", i + 1, std[i].name, std[i].class, std[i].marks);
    }
    return 0;
}