#include <stdio.h>
int main()
{
    int a;

    printf("enter age: ");
    scanf("%d", &a);

    if (a >= 18)
    {
        printf("Eligible for Voting");
    }
    else
    {
        printf("Not Eligible for Voting");
    }

    return 0;
}

//________________________________________________________________________

#include <stdio.h>
int main()
{
    int a;

    printf("enter age: ");
    scanf("%d", &a);

    (a >= 18) ? printf("Eligible for Voting") : printf("Not Eligible for Voting");

    return 0;
}

//________________________________________________________________________

#include <stdio.h>
int main()
{
    int a = 18, b = 14; 

    printf("%d", a ^ b);

    return 0;
}

//________________________________________________________________________

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("enter three digits: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("average is : %d", ((a + b + c) / 3));

    return 0;
}

//________________________________________________________________________

#include <stdio.h>
int main()
{
    int a;

    printf("enter marks: ");
    scanf("%d", &a);

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

//________________________________________________________________________

#include <stdio.h>
int main()
{
    int a;

    printf("enter radius: ");
    scanf("%d", &a);

    printf("area is : %.2f", (3.14 * a * a));
    printf("\ncircumference is : %.2f", (2 * 3.14 * a));

    return 0;
}

//________________________________________________________________________