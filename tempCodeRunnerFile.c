#include <stdio.h>
void main()
{
    char str1[40], str2[40], str3[80];
    int j = 0, i = 0, k = 0;
    printf("Enter the string 1 : ");
    gets(str1);
    printf("Enter the string 2 : ");
    gets(str2);
    while (str1[i] != '\0')
    {
        str3[j] = str1[i];
        i++;
        j++;
    }
    while (str2[k] != '\0')
    {
        str3[j] = str2[k];
        k++;
        j++;
    }
    printf("Concatanated strings is : %s", str3);
}