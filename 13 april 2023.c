#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p1, *p2;
    p1 = arr;
    p1++;                // p1 will point towards next memory location
    printf("\n%d", *p1); // 2 will be printed
    p1--;
    printf("\n%d", *p1);
    p1 = p1 + 2; // addding a constant to pointer (p1 will point towards)
    printf("\n%d", *p1);
    p1 = p1 - 2;
    printf("\n%d", *p1); // 1 will be printed
    p2 = &arr[4];
    printf("\n%d", p2 - p1); // returns 4
    while (p1 <= p2)
    {
        printf("\n%d", *p1);
        p1++;
    }
    return 0;
}

//____________________________________________

