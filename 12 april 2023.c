//Pointers in C

#include <stdio.h>
int main(){
    int x = 10, *p;
    p = &x;
    printf("%u\n", p);
    printf("%d\n",*p);
    return 0;
}