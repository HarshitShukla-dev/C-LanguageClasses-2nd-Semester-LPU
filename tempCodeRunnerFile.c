#include <stdio.h>
void main()
{
    char name[] = ("Lovely Professional University");
    int i = 0;
    while (name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }
}