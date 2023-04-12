// Pointers in C

#include <stdio.h>
int main()
{
    int x = 10, *p;
    p = &x;
    printf("%u\n", p);
    printf("%d\n", *p);
    printf("%p\n", *p);
    printf("%p\n", p);
    return 0;
}

//______________________________

#include <stdio.h>
int main()
{
    int *pnum;
    char *pch;
    float *pfloat;
    long *pdouble;

    return 0;
}