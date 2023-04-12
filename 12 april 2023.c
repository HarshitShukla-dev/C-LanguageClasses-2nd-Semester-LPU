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

// program to find area of circle using pointers
#include <stdio.h>
int main()
{
    double radius, area = 0.0;
    double *pradius = &radius, *parea = &area;
    printf("\nEnter radius of circle: ");
    scanf("%lf", pradius);
    printf("\nArea of circle is %.3lf", *parea = 3.14 * (*pradius * *pradius));
    return 0;
}

//______________________________

// NULL Pointer
#include <stdio.h>
int main()
{
    int *ptr = NULL;
    int a = 10;
    printf("%u\n", ptr);
    ptr = &a;
    printf("%u\n", ptr);
    printf("%d\n", *ptr);
    return 0;
}

//______________________________

// Wild Pointer
#include <stdio.h>
int main()
{
    int *ptr;
    int a = 10;
    printf("%u\n", ptr);
    ptr = &a;
    printf("%u\n", ptr);
    printf("%d\n", *ptr);
    return 0;
}

//______________________________

#include <stdio.h>
int main()
{
    int x = 10;
    char ch = 'A';
    void *gp;
    gp = &x;
    printf("\nGeneric pointer points to the integer value = %d", *(int *)gp);
    gp = &ch;
    printf("\nGeneric pointer points to the character value = %c", *(char *)gp);
    return 0;
}

//______________________________

#include <stdio.h>
int main()
{
    int var1 = 60, var2 = 70;
    int *const ptr = &var1; // defining constant pointer
    printf("\n%d", *ptr);
    // ptr=&var2; // invalid errot will rise
    // printf("\n%d",*ptr);
    return 0;
}