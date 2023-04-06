#include <string.h>
#include <stdio.h>
union data
{
    int i;
    float f;
    char str[20];
};
int main()
{
    union data Data;
    printf("memory size occupied by data: %d\n", sizeof(Data));
    Data.i = 10;
    printf("Data.i : %d\n", Data.i);
    return 0;
}