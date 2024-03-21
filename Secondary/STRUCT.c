#include <stdio.h>
#include <string.h> /////

int main()
{
    int n;
    printf("How many students? -> ");
    scanf("%d", &n);

    struct student
    {
        int sn;
        char name[30];
        int class;
    } std[n];

    // taking input
    int i, j;
    for (i = 0; i < n; i++)
    {
        printf("Enter SN, Name & Class ->\n");
        scanf("%d", &std[i].sn);
        scanf("%s", std[i].name);
        scanf("%d", &std[i].class);
    }

    // sorting values
    char temp[30]; /////
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(std[i].name, std[j].name) > 0) // < 0 for descending
            // value of strcmp(std[i].name, std[j].name) in this program would be :
            // Negative if std[i].names comes before std[j].name
            // Positive if std[i].names comes after std[j].name
            // In accordance to alphabetical order
            {
                strcpy(temp, std[i].name);
                strcpy(std[i].name, std[j].name);
                strcpy(std[j].name, temp);
                // for ascending, the first value must be smaller
                // since the first value is greater in this case
                // swapping it with the second value
            }
        }
    }

    // giving output
    printf("SN\tName\tClass\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\n", std[i].sn, std[i].name, std[i].class);
    }
    return 0;
}
