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