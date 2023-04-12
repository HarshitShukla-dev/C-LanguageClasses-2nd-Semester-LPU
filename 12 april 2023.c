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
    printf("\nsize of int pointer=%d", sizeof(pnum));
    printf("\nsize of char pointer=%d", sizeof(pch));
    printf("\nsize of float pointer=%d", sizeof(pfloat));
    printf("\nsize of double pointer=%d", sizeof(pdouble));
    return 0;
}

//______________________________

