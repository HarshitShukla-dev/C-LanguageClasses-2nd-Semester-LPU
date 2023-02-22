#include <stdio.h>
int main()
{
    int n = 10;

    while (n < 10)
    {
        printf("%d hello world\n", n);
        n += 1;
    }

    return 0;
}

//____________________________________________

#include <stdio.h>
int main()
{
    int n = 10;

    while (n < 20)
    {
        printf("%d hello world\n", n);
        n += 1;
    }

    return 0;
}

//____________________________________________

#include <stdio.h>
int main()
{
    int i = 0;

    while (i < 3)
        i++;
    printf("in while loop\n");

    return 0;
}

//____________________________________________

#include <stdio.h>
int main()
{
    int i = 0;

    while (i < 3)
    {
        printf("in while loop\n");
    }

    return 0;
}

//____________________________________________

#include <stdio.h>
int main()
{
    for (int i = 0; i < 11; i++)
    {
        printf("hello %d\n", i);
    }

    return 0;
}

//____________________________________________

#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter the value: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("The sum is : %d", sum);

    return 0;
}

//____________________________________________

#include <stdio.h>
int main()
{
    int i;

    for (i = 1; i != 10; i += 2)
        printf("hello");

    return 0;
}

//____________________________________________

#include <stdio.h>
int main()
{
    int i, j, k;

    printf("Enter range: ");
    scanf("%d", &k);

    for (i = 1; i <= k; i += 1)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

//____________________________________________

#include <stdio.h>
int main()
{
    int i = 10;

    do
    {
        printf("%d ", i);
        i--;
    } while (i > 0);

    return 0;
}

//____________________________________________

#include <stdio.h>
int main()
{
    do
        printf("in while loop\n");
    while (0);
    printf("After loop\n");

    return 0;
}

//____________________________________________

#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        i++;
        printf("in while loop\n");
    } while (i < 3);

    return 0;
}

//____________________________________________
