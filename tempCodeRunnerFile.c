#include <stdio.h>
#include <string.h>
void main()
{
    // strcopy() function
    char ori[20], dup[20];
    char *s;
    printf("Enter your name: ");
    gets(ori);
    printf("Enter your duplicate name: ");
    gets(dup);
    s = strcpy(ori, dup);
    printf("\nOriginal string is: %s", ori);
    printf("\nDuplicate string is: %s", dup);
    printf("\nValue of s is: %s", s);
}