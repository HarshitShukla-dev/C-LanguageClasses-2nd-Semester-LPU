// implicit function
#include <stdio.h>
int main()
{
    float a, b;
    int c;

    printf("enter the value of b and c");
    scanf("%f\n%d", &b, &c);

    a = b / c;

    printf("%f", a);

    return 0;
}

//_____________________________________________

// explicit function
#include <stdio.h>
int main()
{
    float a, b;
    int c;

    printf("enter the value of b and c");
    scanf("%f\n%d", &b, &c);

    a = b / (float)c;

    printf("%f", a);

    return 0;
}

//_____________________________________________

// implicit function
#include <stdio.h>
int main()
{
    int x = 10;
    char y = 'a';

    x = x + y;
    float z = x + 1.0;

    printf("x=%d,z=%f", x, z);

    return 0;
}

//_____________________________________________

// explicit function
#include <stdio.h>
int main()
{
    float a = 1.5;
    int b = (int)a;

    printf("a=%f\n", a);
    printf("b=%d\n", b);

    return 0;
}

//_____________________________________________

// control statements (jump)
#include <stdio.h>
int main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}

//_____________________________________________

#include <stdio.h>
int main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }
        printf("%d\n", i * 10);
    }

    return 0;
}

//_____________________________________________

#include <stdio.h>
int main()
{
    int i;

    for (i = 10; i > 0; i = i - 1)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d", i);
    }

    return 0;
}

//_____________________________________________

// goto statement
#include <stdio.h>
int main()
{
    int x;

    printf("enter a number: ");
    scanf("%d", &x);

    if (x % 2 == 0)
        goto even;
    else
        goto odd;

even:
    printf("%d is even", x);
    return 0;
odd:
    printf("%d is odd", x);

    return 0;
}
// return function directly terminates the fuction