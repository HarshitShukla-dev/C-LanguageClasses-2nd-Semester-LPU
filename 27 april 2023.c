#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    printf("Enter the string : ");
    gets(str);
    printf("Length of the string is %d.", strlen(str));
    return 0;
}

//_________________________________

#include <stdio.h>
#include <string.h>
void main()
{
    char str[40];
    printf("Enter the string : ");
    gets(str);
    printf("Reverse of the string is %s.", strrev(str));
}

//_________________________________

#include <stdio.h>
#include <string.h>
void main()
{
    char str[40];
    printf("Enter the string in uppercase : ");
    gets(str);
    printf("Lowercase of the string is %s.", strlwr(str));
}

//_________________________________

#include <stdio.h>
#include <string.h>
void main()
{
    char str[40];
    printf("Enter the string in Lowercase : ");
    gets(str);
    printf("Uppercase of the string is %s.", strupr(str));
}

//_________________________________

// Copy two strings without copy function
#include <stdio.h>
void main()
{
    char str1[40], str2[40];
    int i = 0;
    printf("Enter the string 1 : ");
    gets(str1);
    printf("Enter the string 2 : ");
    gets(str2);
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    printf("The string 1 is %s and the string 2 is %s.", str1, str2);
}

//_________________________________

// Find length of string without function
#include <stdio.h>
void main()
{
    char str1[40], str2[40];
    int i = 0;
    printf("Enter the string 1 : ");
    gets(str1);
    while (str1[i] != '\0')
    {
        i++;
    }
    printf("Length is %d", i);
}

//_________________________________

// Add two strings without a function
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

//_________________________________

// Convert uppercase to lowercase without a function
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

//_________________________________

// Convert lowercase to uppercase without a function
#include <stdio.h>
void main()
{
    char str1[40], str2[40];
    int i = 0;
    printf("Enter the string 1 : ");
    gets(str1);
    while (str1[i] != '\0')
    {
        str2[i] = str1[i] - 32;
        i++;
    }
    printf("Uppercase is %s", str2);
}

//_________________________________