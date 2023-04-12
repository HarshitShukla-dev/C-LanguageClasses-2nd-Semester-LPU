#include <stdio.h>
int main()
{
    int *ptr = NULL;
    int a = 10;
    printf("%u\n", ptr);
    int *p = &a;
    printf("%u\n", ptr);
    printf("%d\n", *ptr);
    return 0;
}