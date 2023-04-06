// Bubble Sort
#include <stdio.h>
int main()
{
    int n;

    printf("Enter the range of Array : ");
    scanf("%d", &n);
    int myArray[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &myArray[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (myArray[j] > myArray[j + 1])
            {
                int temp = myArray[j];
                myArray[j] = myArray[j + 1];
                myArray[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", myArray[i]);
    }

    printf("\nmin is : %d", myArray[0]);
    printf("\nmax is : %d", myArray[n - 1]);

    return 0;
}

//________________________________________

// Linear Search
#include <stdio.h>
#define false -211
int main()
{
    int n, search, index = false;

    printf("Enter the range of Array : ");
    scanf("%d", &n);
    int myArray[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &myArray[i]);
    }

    printf("\nYour Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", myArray[i]);
    }

    printf("\nEnter the value you want to search : ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++)
    {
        if (myArray[i] == search)
        {
            index = i;
            break;
        }
    }

    if (index == false)
    {
        printf("Sorry not found !!");
    }
    else
    {
        printf("\nFound!!\n");
        printf("at %d index position..");
    }

    return 0;
}

//________________________________________

// Binary Search
#include <stdio.h>
int main()
{
    int n, search;

    printf("Enter the range of Array : ");
    scanf("%d", &n);
    int myArray[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &myArray[i]);
    }

    printf("\nYour Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", myArray[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (myArray[j] > myArray[j + 1])
            {
                int temp = myArray[j];
                myArray[j] = myArray[j + 1];
                myArray[j + 1] = temp;
            }
        }
    }

    printf("\nSorted Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", myArray[i]);
    }

    printf("\n\nEnter the value you want to search : ");
    scanf("%d", &search);

    int first, middle, last;
    first = 0;
    last = n;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (search < myArray[middle])
        {
            last = middle - 1;
            middle = (first + last) / 2;
        }
        else if (search > myArray[middle])
        {
            first = middle + 1;
        }
        else
        {
            printf("\nFound!!\n");
            printf("at %d index position..", middle);
            break;
        }
        if (first > last)
        {
            printf("Sorry!! ... not found ..");
        }
    }

    return 0;
}

//________________________________________
