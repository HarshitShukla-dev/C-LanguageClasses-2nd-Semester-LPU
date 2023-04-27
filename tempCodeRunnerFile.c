#include <stdio.h>
void main()
{
    char str1[40], str2[40];
    int i = 0;
    printf("Enter the string 1 : ");
    gets(str1);
    while (str1[i] != '\0')
    {
        str2[i] = str1[i] + 32;
        i++;
    }
    printf("Lowercase is %s", str2);
}