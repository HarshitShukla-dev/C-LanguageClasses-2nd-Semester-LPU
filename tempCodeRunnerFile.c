#include <stdio.h>
void main(){
    char str1[40],str2[40];
    int i = 0;
    printf("Enter the string 1 : ");
    gets(str1);
    printf("Enter the string 2 : ");
    gets(str2);
    while(str1[i] != '\0'){
        str2[i] = str1[i];
        i++;
    }
    printf("The string 1 is %s and the string 2 is %s.", str1, str2);
}
