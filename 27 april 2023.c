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