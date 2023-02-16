#include <stdio.h>
int main()
{
    int a = 10, b = 0, c = 2, d;

    d = a && b || c - 2;

    printf("%d", d);

    return 0;
}

//_________________________________________

#include <stdio.h>
int main()
{
    int x = 1, y = 0, z = 5;
    int a = x && y || z++; // if we have OR with unary operator, it'll increment. (Output before the logical operator must be 0)

    printf("%d", z);

    return 0;
}

//_________________________________________

#include <stdio.h>
int main()
{
    int x = 1, y = 1, z = 5;
    int a = x && y && z++; // if we have AND with uanry operator, it'll increment. (Output before the logical operator must be 1)

    printf("%d", z);

    return 0;
}

//_________________________________________

#include <stdio.h>
int main()
{
    int x = 1, y = 0, z = 5;
    int a = x && y || ++z;

    printf("%d", z);

    return 0;
}

//_________________________________________

#include <stdio.h>
int main()
{
    int x = 1, y = 1, z = 5;
    int a = x && y && ++z;

    printf("%d", z);

    return 0;
}

//_________________________________________

#include <stdio.h>
int main()
{
    int a = 2, b = 4;

    printf("a = %d, b = %d\n", a, b);
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~ a = %d\n", ~ a);
    printf("b << 1 = %d\n", b << 1);
    printf("b >> 1 = %d\n", b >> 1);

    return 0;
}

//_________________________________________

