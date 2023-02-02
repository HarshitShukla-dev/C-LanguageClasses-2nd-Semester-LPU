// 1: Printing Hello World
#include <stdio.h>
int main() {
    printf("Hello World");
    return 0;
}

//________________________________________________________________

// 2: Print a number Entered by the user
#include <stdio.h>
int main() {
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    printf("You have Entered %d",number);
    return 0;
}

//________________________________________________________________

// 3: C Program to Add two integers
#include <stdio.h>
int main() {
    int number1, number2, Sum;
    printf("Number 1 : ");
    scanf("%d",&number1);
    printf("Number 2 : ");
    scanf("%d",&number2);
    Sum = number1 + number2;
    printf("Sum of %d and %d is %d",number1,number2,Sum);
    return 0;
}

//________________________________________________________________

// 4: C Program to Multiply two integers
#include <stdio.h>
int main() {
    float number1, number2, Mul;
    printf("Number 1 : ");
    scanf("%f",&number1);
    printf("Number 2 : ");
    scanf("%f",&number2);
    Mul = number1 * number2;
    printf("Multiplication of %f and %f is %f",number1,number2,Mul);
    return 0;
}

//________________________________________________________________________

// 5: C program to find ASCII value of a given Character
#include <stdio.h>
int main(){
    char chr;
    printf("Enter the Character : ");
    scanf("%c",&chr);
    printf("\nThe ASCII Value of %c is %d", chr, chr);
    return 0;
}

//________________________________________________________________________
