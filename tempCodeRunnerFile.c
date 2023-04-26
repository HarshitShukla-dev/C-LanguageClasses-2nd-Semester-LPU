#include <stdio.h>
void main()
{
    char country[] = "INDIA";
    char *ptr;
    ptr = country;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
}