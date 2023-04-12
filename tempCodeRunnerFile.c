//Wild Pointer
#include <stdio.h>
int main(){
    int *ptr;
    int a = 10;
    printf("%u\n",ptr);
    ptr = &a;
    printf("%u\n",ptr);
    printf("%d\n",*ptr);
    return 0;
}