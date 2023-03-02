#include <stdio.h>
void printName();
void main()
{
    printf("Hello");
    printName();
}
void printName()
{
    printf("Hello World");
}

//______________________________________

#include <stdio.h>
int sum();
int main()
{
    int result;

    printf("Going to calculate the sum of two numbers\n");

    result = sum();

    printf("Sum is : %d", result);

    return 0;
}
int sum()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    return a + b;
}

//______________________________________

#include <stdio.h>
int sum()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    return a + b;
}
int avg()
{
    int a, b;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    return (a + b) / 2;
}
void main()
{
    int sum1, avg1;

    sum1 = sum();
    avg1 = avg();

    printf("sum: %d", sum1);
    printf("average: %d", avg1);
}

//______________________________________

#include <stdio.h>
int sqr(int a)
{
    return a * a;
}
int Area(int a, int b)
{
    return a * b;
}
void main()
{
    int a, b, c, area, square;

    printf("Enter the number for square : ");
    scanf("%d", &a);

    printf("Enter Height and Width : ");
    scanf("%d %d", &b, &c);

    area = Area(b, c);
    square = sqr(a);

    printf("\nArea : %d", area);
    printf("\nSquare : %d", square);
}

//______________________________________

#include <stdio.h>
int main()
{
    int num, mult;
    int i = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (i < 11)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}

//______________________________________

#include <stdio.h>
void fun(int *ptr1, int *ptr2)
{
    *ptr1 = 30, *ptr2 = 50;
}
void main()
{
    int x = 10, y = 20;
    fun(&x, &y);
    printf("x = %d, y = %d", x, y);
}

//______________________________________

#include <stdio.h>
void main()
{
    int i = 3;
    printf("Address of i = %d", &i);
    printf("\nValue of i = %d", i);
}

//______________________________________

#include <stdio.h>
void fun(int a)
{
    printf("%d ", a);
    return a * a;
}
void main()
{
    int a = 5;
    fun(a);
    printf("%d", a);
}

//________________________________________________________________________