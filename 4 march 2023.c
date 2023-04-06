#include <stdio.h>
void fun()
{
    auto int a = 20;
    ++a;
    printf("%d\n", a);
}
void main()
{
    fun();
    fun();
    fun();
}

//_______________________________

#include <stdio.h>
void fun()
{
    static int a = 20;
    ++a;
    printf("%d\n", a);
}
void main()
{
    fun();
    fun();
    fun();
}

//_______________________________

#include <stdio.h>
void fun()
{
    int x = 1;
    x += 5;
    printf("%d\n", x);
}
void main()
{
    extern int x;
    printf("x=%d\n", x);
    fun();
}

//_______________________________

#include <stdio.h>
void main()
{
    register int x, sum = 0;
    for (x = 1; x < 10000; x++)
    {
        sum += x;
    }
    printf("sum=%d\n", sum);
}