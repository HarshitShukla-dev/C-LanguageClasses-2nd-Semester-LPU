// Element by Reference
#include <stdio.h>

void reference(int[], int);

int main()
{
    int myArray[100], n;
    int i;
    printf("\nEnter n: ");
    scanf("%d", &n);
    printf("\n Enter array elements: ");
    for (i = 0; i < n; i++) //taking array input
    {
        scanf("%d", &myArray[i]);
    }
    printf("\n Elements by reference: ");
    reference(myArray, n);
    return 0;
}

void reference(int x[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        printf("%d,", x[i]);
    }
    printf("%d", x[size - 1]);
}

//_________________________________

// Element by value
#include <stdio.h>

void value(int x)
{
    printf("%d ", x);
}

void main()
{
    int myArray[100], n;
    int i;
    printf("\nEnter n: ");
    scanf("%d", &n);
    printf("\n Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &myArray[i]);
    }
    printf("\n Elements by value: ");
    for (i = 0; i < n; i++)
    {
        value(myArray[i]);
    }
}

//_________________________________

// Insert
#include <stdio.h>
#define maxLen 100
int main()
{
    int n, indexPosition, newValue, myArray[maxLen];

    printf("Enter the range of Array : ");
    scanf("%d", &n);
    myArray[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &myArray[i]);
    }

    printf("Your Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", myArray[i]);
    }

    printf("\nEnter index position: ");
    scanf("%d", &indexPosition);

    printf("Enter value: ");
    scanf("%d", &newValue);

    myArray[indexPosition] = newValue;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", myArray[i]);
    }

    return 0;
}

//_________________________________

// Delete
#include <stdio.h>
#define maxLen 100
int main()
{
    int n, Position, newValue, myArray[maxLen];

    printf("Enter the range of Array : ");
    scanf("%d", &n);
    myArray[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &myArray[i]);
    }

    printf("Your Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", myArray[i]);
    }

    printf("\nEnter position of element to delete: ");
    scanf("%d", &Position);

    for (int i = Position - 1; i < n; i++)
    {
        myArray[i] = myArray[i + 1];
    }

    printf("New array: ");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", myArray[i]);
    }

    return 0;
}

//_________________________________
