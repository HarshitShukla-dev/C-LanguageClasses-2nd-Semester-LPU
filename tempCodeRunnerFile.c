#include <stdio.h>
#include <string.h>
void main()
{
    char str[40];
    printf("Enter the string : ");
    gets(str);
    printf("Reverse of the string is %s.", strrev(str));
}