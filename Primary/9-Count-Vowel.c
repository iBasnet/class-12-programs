#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int vowels = 0, i, n;
    printf("Enter a string: ");
    scanf("%s", str);

    str[100] = strlwr(str);
    n = strlen(str);

    for (i = 0; i < n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowels++;
        }
    }
    printf("Total vowels: %d\n", vowels);
    return 0;
}
