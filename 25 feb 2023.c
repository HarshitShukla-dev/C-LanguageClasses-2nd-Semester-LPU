#include <stdio.h>
int main()
{
    int a = 123;

    printf("*%06d*", a);

    return 0;
}

//_____________________________________________

#include <stdio.h>
int main()
{
    float a = 654.123456f;

    printf("%3.3f, %3.2f", a, a);

    return 0;
}

//_____________________________________________

#include <stdio.h>
void main()
{
    char c;

    printf("Enter a character: ");
    c = getchar();

    printf("c = %c\n", c);

    putchar(c);
}

//_____________________________________________

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Enter two alphabets: ");
    getche();
    getch();
}

//_____________________________________________

#include <stdio.h>
void main()
{
    char c;

    printf("Enter a character: ");
    c = getchar();

    putchar(c);
}

//_____________________________________________

#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;

    printf("Press any key to continue: ");
    ch = getch();

    printf("You pressed ");
    putch(ch);
}

//_____________________________________________

#include <stdio.h>
void main()
{
    char ch[30];

    printf("Enter a string: ");
    gets(ch);

    printf("You entered : %s", ch);
}

//_____________________________________________