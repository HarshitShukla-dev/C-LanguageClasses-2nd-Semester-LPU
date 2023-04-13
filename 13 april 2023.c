#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int *p1, *p2;
    p1 = arr;
    p1++;
    printf("%d",*p1);
    p1--;
    printf("%d",*p1);
    return 0;
}