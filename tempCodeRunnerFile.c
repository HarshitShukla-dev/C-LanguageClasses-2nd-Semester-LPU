#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[20];
    int x;
    printf("\nEnter the first string: ");
    gets(str1);
    printf("\nEnter the second string: ");
    gets(str2);
    x = strcmp(str1, str2);
    if (x == 0)
    {
        printf("\nThe strings are equal");
    }
    else if (x > 0)
    {
        printf("\nThe first string is greater than the second");
    }
    else
    {
        printf("\nThe first string is less than the second");
    }
    return 0;
}