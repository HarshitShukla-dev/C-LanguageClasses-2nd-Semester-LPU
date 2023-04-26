#include <stdio.h>
void main()
{
    char name[100];
    puts("\nEnter the string : ");
    gets(name);
    printf("\nString is: ");
    puts(name);
}

//_________________________________

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

//_________________________________

#include <stdio.h>
void main()
{
    char ary[] = "Discovery Channel";
    printf("%s", ary);
}

//_________________________________

#include <stdio.h>
void main()
{
    char country[] = "INDIA";
    char *ptr;
    ptr = country;
    while (*ptr != '\0')
    {
        printf("%c", *ptr); // prints INDIA
        ptr++;
    }
}