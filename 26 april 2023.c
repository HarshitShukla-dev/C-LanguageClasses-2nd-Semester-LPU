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

//_________________________________

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

//_________________________________

#include <stdio.h>
#include <string.h>
void main()
{
    // strcopy() function
    char ori[20], dup[20];
    char *s;
    int n;
    printf("Enter your name: ");
    gets(ori);
    printf("Enter your duplicate name: ");
    gets(dup);
    printf("Enter the value of n: ");
    scanf("%d",n);
    s = strncpy(ori, dup,n);
    printf("\nOriginal string is: %s", ori);
    printf("\nDuplicate string is: %s", dup);
    printf("\nValue of s is: %s", s);
}

//_________________________________

#include <stdio.h>
#include <string.h>
void main()
{
    // strcat() function
    char ori[20], dup[20];
    printf("Enter your name: ");
    gets(ori);
    printf("Enter your duplicate name: ");
    gets(dup);
    strcat(ori,dup);
    printf("String after concatenation: %s",ori);
}   

//_________________________________

#include <stdio.h>
#include <string.h>
void main()
{
    // strcat() function
    char ori[20], dup[20];
    char *s;
    int n;
    printf("Enter your name: ");
    gets(ori);
    printf("Enter your duplicate name: ");
    gets(dup);
    printf("Enter the value of n: ");
    scanf("%d",n);
    strncat(ori, dup,n);
    printf("\nOriginal string is: %s", ori);
}

//_________________________________
