#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * (factorial(n - 1));
    }
}
void main()
{
    int n, fact;

    printf("Enter the number: ");
    scanf("%d", &n);

    fact = factorial(n);

    printf("factorial : %d", fact);
}

//______________________________________________

#include <stdio.h>
int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (fibo(n - 1) + fibo(n - 2));
    }
}
int main()
{
    int n, fib, i;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Fibbonacci series :\n");

    for (i = 0; i < n + 1; i++)
    {
        fib = fibo(i);
        printf("%d ", fib);
    }
}

//______________________________________________
