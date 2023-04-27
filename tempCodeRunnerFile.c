#include <stdio.h>
void main(){
    char str1[40],str2[40];
    printf("Enter the string 1 : ");
    gets(str1);
    printf("Enter the string 2 : ");
    gets(str2);
    str1 = str2;
    printf("The string 1 is %s and the string 2 is %s.", str1, str2);
}