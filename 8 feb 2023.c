#include <stdio.h>
int main()
{
    int a = 10;
    double b = 5.6;
    int c;

    c = a + b;

    printf("%d\n", c);

    return 0;
}

//___________________________________________

#include <stdio.h>
int main()
{
    int a = 10;
    double b = 5.6;
    float c;

    c = a + b;

    printf("%.1f\n", c);

    return 0;
}

//___________________________________________

#include <stdio.h>
int main()
{
    int a = 13;
    float b = 15.96;
    float c = a + b;

    printf("%.2f\n", c);

    return 0;
}

//___________________________________________

#include <stdio.h>
int main()
{
    int x = 3, y, z;

    y = x++;
    z = ++x;

    printf("%d %d %d", x, y, z);

    return 0;
}

//___________________________________________

#include <stdio.h>
int main()
{
    int a = 1, b = 1, c;

    c = a++ + b;

    printf("%d,%d,%d", a, b, c);

    return 0;
}

//___________________________________________

#include <stdio.h>
int main()
{
    int a = 1, b = 1, c;

    c = a++ + b + a++;

    printf("%d,%d,%d", a, b, c);

    return 0;
}

//___________________________________________

#include <stdio.h>
int main()
{
    int d, a = 1, b = 2;

    d = a++ + ++b;

    printf("%d,%d,%d", d, a, b);

    return 0;
}

//___________________________________________

#include <stdio.h>
int main()
{
    int i = 0;
    int x = i++;
    int y = ++i;

    printf("%d,%d", x, y);

    return 0;
}

//___________________________________________

#include <stdio.h>
int main()
{
    int x = 4, y, z;

    y = --x;
    z = x--;

    printf("%d,%d,%d", x, y, z);

    return 0;
}

//___________________________________________

#include <stdio.h>
int main()
{
    int a = 1, b = 2, c;

    c = a > b;

    printf("%d", c);

    return 0;
}

//___________________________________________

#include <stdio.h>
int main()
{
    int a = 1, b = 2;

    printf("%d", a != b);

    return 0;
}

//____________________________________________

#include <stdio.h>
int main()
{
    int a = 10, b = 5, c = 5;
    int d;

    d = b + c == a;

    printf("%d",d);

    return 0;
}

//____________________________________________

#include <stdio.h>
int main()
{
    int a = 10, b = 0, c;

    c = a && b;

    printf("%d",c);

    return 0;
}

//____________________________________________

#include <stdio.h>
int main()
{
    int a = 10, b = 0, c;

    c = a || b;

    printf("%d",c);

    return 0;
}

//____________________________________________