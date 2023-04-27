#include <stdio.h>
int main(){
    char str;
    printf("Enter the string : ");
    gets(str);
    printf("Length of the string is %d.",strlen(str));
    return 0;
}