#include <stdio.h>
int main()
{
    int myArray[5];
    for (int i = 0; i < 5; i++)
    {
        myArray[i] = i;
    }
    printf("%d", myArray[2]);
    return 0;
}

//_________________________________

#include <stdio.h>
int main()
{
    int myArray[5] = {11, 22, 33, 44, 55};
    myArray[2] = myArray[1];
    myArray[3] = myArray[2];
    myArray[4] = myArray[3];
    printf("%d", myArray[4]);
    return 0;
}

//________________________________

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

//________________________________

#include <stdio.h>
int main()
{
    int myArray[5] = {5, 1, 15, 20, 25};
    int i, j, m;
    i = ++myArray[1];
    j = myArray[1]++;
    m = myArray[i++];
    printf("%d %d %d\n", i, j, m);
    return 0;
}

//________________________________

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

    for (int i = 0; i < n; i++)
    {
        if (myArray[i] % 2 != 0)
        {
            printf("%d ", myArray[i]);
        }
    }

    return 0;
}

//________________________________

#include <stdio.h>
int main()
{
    int i, n, max_index, min_index, temp;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    max_index = 0;
    min_index = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > arr[max_index])
        {
            max_index = i;
        }
        if (arr[i] < arr[min_index])
        {
            min_index = i;
        }
    }

    temp = arr[max_index];
    arr[max_index] = arr[min_index];
    arr[min_index] = temp;

    printf("\nArray after swapping max and min values: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

//________________________________

#include <stdio.h>
int main()
{
    int myArray[5] = {5, 6, 15, 1, 20};

    for (int i = 0; i < 5; i++)
    {
        if (myArray[i] % 5 == 0)
            myArray[i] *= -1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", myArray[i]);
    }
    
    return 0;
}

//________________________________
