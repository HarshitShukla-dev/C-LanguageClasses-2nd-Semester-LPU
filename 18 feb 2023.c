#include <stdio.h>
int main()
{
    int x = 5;

    if (x < 1)
    {
        printf("hello");
    }
    else
    {
        printf("hii");
    }

    return 0;
}

//___________________________________________

#include <stdio.h>
int main()
{
    int x = 0;

    if (x == 0)
        printf("hii");
    else
        printf("how are you?"); // only this line is in else block

    printf("hello");

    return 0;
}

//___________________________________________
/* there is no need to use curly brackets when we have to execute a single line code in condition block */
//___________________________________________

#include <stdio.h>
int main()
{
    int v;

    printf("Enter the number: ");
    scanf("%d", &v);

    if (v < 10)
    {
        printf("number is less than 10");
    }
    else if (v < 100)
    {
        printf("number is less than 100");
    }

    return 0;
}

//___________________________________________

#include <stdio.h>
int main()
{
    int x = 1;

    if (x > 0)
        printf("inside if\n");
    else if (x > 0)
        printf("inside else if\n");

    return 0;
}

//___________________________________________

#include <stdio.h>
int main()
{
    int x = 0;

    if (x == 1)
        if (x >= 0)
            printf("true\n");
        else
            printf("false\n");

    return 0;
}

//___________________________________________

#include <stdio.h>
int main()
{
    int x = 0;

    if (x == 1)
        if (x >= 0)
            printf("inside nested if\n");
        else
            printf("inside nested else\n");
    else
        printf("inside else\n");

    return 0;
}

//___________________________________________

#include <stdio.h>
int main()
{
    double ch;

    printf("Enter your number: ");
    scanf("%lf",&ch);

    switch (ch)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;
    
    default:
        break;
    }

    return 0;
}

//___________________________________________