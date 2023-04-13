#include <stdio.h>

int main() {
    int x = 10, y = 20;
    int *p, *q;

    p = &x;
    q = &y;

    (*p > *q) ? printf("%d is greater than %d\n", *p, *q) : printf("%d is greater than %d\n", *q, *p);

    return 0;
}
