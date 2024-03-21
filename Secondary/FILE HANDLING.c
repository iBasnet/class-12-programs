#include <stdio.h>
int main()
{
    char n[10];
    int c, e, ne, m;
    FILE *fptr;
    fptr = fopen("student.txt", "r");
    printf("Name\tPercentage\n");

    // 1. A datafile “student.txt” contain name, class and marks obtained in 3 different subject of few students.Write a C program to read and display all records.

    while (fscanf(fptr, "%s %d %d %d %d", n, &c, &e, &ne, &m) != EOF)
    {
        printf("%s %d  %d  %d  %d", n, c, e, ne, m);
    }
    fclose(fptr);

    // 2. A datafile “student.txt” contain name, class and marks obtained in 3 different subject of few students.Write a C program to read and display only records whose name is Ram.

    while (fscanf(fptr, "%s %d %d %d %d", n, &c, &e, &ne, &m) != EOF)
    {
        strlwr(n);
        if (strcmp(n, "ram") == 0)
        {
            printf("%s %d  %d  %d  %d", n, c, e, ne, m);
        }
    }

    // 3. A datafile “student.txt” contain name, class and marks obtained in 3 different subject of few students. Write a C program to read and display only records who pass in all subjects.

    while (fscanf(fptr, "%s %d %d %d %d", n, &c, &e, &ne, &m) != EOF)
    {
        if (e >= 40 && ne >= 40 && m >= 40)
        {
            printf("%s %d  %d  %d  %d", n, c, e, ne, m);
        }
    }

    // 4. A datafile “student.txt” contain name, class and marks obtained in 3 different subject of few students. Write a C program to read and display only records who fail in any one subject.

    while (fscanf(fptr, "%s %d %d %d %d", n, &c, &e, &ne, &m) != EOF)
    {
        if (e < 40 || ne < 40 || m < 40)
        {
            printf("%s %d  %d  %d  %d", n, c, e, ne, m);
        }
    }

    // 5. A datafile “student.txt” contain name, class and marks obtained in 3 different subject of few students. Write a C program to read and display only records of all students who secure distinction.

    while (fscanf(fptr, "%s %d %d %d %d", n, &c, &e, &ne, &m) != EOF)
    {
        int p = (e + ne + m) / 3;
        if (p >= 80)
        {
            printf("%s %d  %d  %d  %d", n, c, e, ne, m);
        }
    }
}