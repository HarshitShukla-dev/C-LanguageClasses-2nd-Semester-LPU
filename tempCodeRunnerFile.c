// program to find area of circle using pointers
#include <stdio.h>
int main()
{
    double radius, area = 0.0;
    double *pradius = &radius, *parea = &area;
    printf("\nEnter radius of circle: ");
    scanf("%lf", pradius);
    printf("\nArea of circle is %lf", *parea = 3.14 * (*pradius * *pradius));
    return 0;
}