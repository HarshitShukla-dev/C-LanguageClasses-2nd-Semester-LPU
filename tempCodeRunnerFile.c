#include <stdio.h>
int main(){
    char Name[30];
    char Address[50];
    printf("Enter your Name : ");
    scanf("%s",Name);
    printf("Enter your Address : ");
    scanf("%s",Address);
    printf("Your Name is %s and you live at %s",Name,Address);
    return 0;
}