#include <stdio.h>
int main()
{
    int n1, n2;

    printf("Enter two digits: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
    {
        printf("%d is greater than %d", n1, n2);
    }
    else if (n1 == n2)
    {
        printf("%d is equal to %d", n1, n2);
    }
    else
    {
        printf("%d is greater than %d", n2, n1);
    }
    return 0;
}

//______________________________________________________

#include <stdio.h>
int main()
{
    int n1, n2, n3;

    printf("Enter three digits: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3 || n1 == n2 && n1 > n3 || n1 == n3 && n1 > n2)
    {
        printf("%d is greatest number", n1);
    }
    else if (n2 > n3 && n2 > n1 || n2 == n3 && n2 > n1 || n2 == n1 && n2 > n3)
    {
        printf("%d is greatest number", n2);
    }
    else if (n3 > n1 && n3 > n2 || n3 == n2 && n3 > n1 || n3 == n1 && n3 > n2)
    {
        printf("%d is greatest number", n3);
    }
    else
    {
        printf("%d, %d, %d, - all are equal", n1, n2, n3);
    }

    return 0;
}

//______________________________________________________

#include <stdio.h>
int main()
{
    int n1, n2, n3;

    printf("Enter three digits: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf(" max is : %d", n1);
        }
        else
        {
            printf("max is : %d", n3);
        }
    }
    else if (n1 == n2 && n2 == n3)
    {
        printf("All three are equal");
    }
    else
    {
        if (n2 > n3)
        {
            printf("max is : %d", n2);
        }
        else
        {
            printf("max is : %d", n3);
        }
    }

    return 0;
}

//______________________________________________________

#include <stdio.h>
int main()
{
    int year;

    printf("Enter Year: ");
    scanf("%d", &year);

    if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
    {
        printf("%d is a Leap Year", year);
    }
    else
    {
        printf("%d is not a Leap Year", year);
    }

    return 0;
}

//______________________________________________________

#include <stdio.h>
int main()
{
    int n = 0;

    printf("enter a number: ");
    scanf("%d", &n);

    switch (n)
    {
    case 10:
        printf("number is equal to 10");
        break;

    case 50:
        printf("number is equal to 50");
    }
}

//______________________________________________________

#include <stdio.h>
int main()
{
    int a1, b, c;
    float a;

    printf("enter marks: ");
    scanf("%d %d %d", &a1, &b, &c);

    a = ((a1 + b + c) * 100) / 300;
    printf("Percentage is : %.2f %\n", a);

    if (a >= 60)
    {
        printf("1st division");
    }
    else if (a >= 45 && a < 60)
    {
        printf("2nd division");
    }
    else if (a >= 33 && a < 45)
    {
        printf("3rd division");
    }
    else
    {
        printf("fail");
    }

    return 0;
}

//______________________________________________________

#include <stdio.h>
int main()
{
    char chr;

    printf("Enter Your Character: ");
    scanf("%c", &chr);

    if (chr >= 'a' && chr <= 'z' || chr >= 'A' && chr <= 'Z')
    {
        printf("%c is an Alphabet", chr);
    }
    else
    {
        printf("%c is not an Alphabet", chr);
    }

    return 0;
}

//______________________________________________________