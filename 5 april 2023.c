#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number, *ptr, i;
    printf("how many ints would you like to store: ");
    scanf("%d", &number);
    ptr = (int *)calloc(number, sizeof(int));
    for (i = 0; i < number; i++)
    {
        *(ptr + i) = i;
    }
    for (i = 0; i < number; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}

//___________________________

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    int i, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (float *)calloc(n, sizeof(float));
    if (ptr != NULL)
    {
        printf("Data is:\n");

        for (i = 0; i < n; i++)
        {
            *(ptr + i) = i;
        }

        for (i = 0; i < n; i++)
        {
            printf("\nx[%d]=%.2f", i, *(ptr + i));
        }
    }
    else
    {
        printf("\nMemory allocation failed");
    }
    return 0;
}

//___________________________

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, i;
    ptr = (int *)calloc(5, sizeof(int));
    *ptr = 1;
    *(ptr + 1) = 2;
    ptr[2] = 4;
    ptr[3] = 8;
    ptr[4] = 16;
    ptr = (int *)realloc(ptr, 7 * sizeof(int));
    ptr[5] = 32;
    ptr[6] = 64;
    for (i = 0; i < 7; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}

//___________________________

#include <stdio.h>
struct car
{
    char *name;
    int seats;
    float price;
};

int main()
{
    struct car myCar;
    myCar.name = "Renault";
    myCar.price = 5.000000;
    myCar.seats = 2;

    printf("car name : %s, car price : %f, car seats : %d", myCar.name, myCar.price, myCar.seats);

    return 0;
}

//___________________________

#include <stdio.h>
struct student
{
    char *name;
    int age;
    float weight;
    char *course;
};

int main()
{
    struct student myStudent;
    myStudent.name = "Sara";
    myStudent.age = 23;
    myStudent.weight = 70.5;
    myStudent.course = "CSE";

    printf("student name: %s, student age: %d, student weight: %.2f, student course: %s", myStudent.name, myStudent.age, myStudent.weight, myStudent.course);

    return 0;
}