#include <stdio.h>
struct car
{
    char name[20];
    int seats;
    float price;
};
int main()
{
    struct car myCar;
    printf("Enter the car name: ");
    scanf("%s", myCar.name);
    printf("Enter the number of seats: ");
    scanf("%d", &myCar.seats);
    printf("Enter the price: ");
    scanf("%f", &myCar.price);
    printf("%s %d %f\n", myCar.name, myCar.seats, myCar.price);
    printf("Size of structure: %d", sizeof(myCar));
    return 0;
}

//_________________________________________

#include <stdio.h>
struct student
{
    char name[30];
    int age;
    int mobile;
    int regID;
    float cgpa;
};
int main()
{
    struct student myStudent;
    printf("Enter the name: ");
    scanf("%s", myStudent.name);
    printf("Enter the age: ");
    scanf("%d", &myStudent.age);
    printf("Enter the mobile: ");
    scanf("%d", &myStudent.mobile);
    printf("Enter the regID: ");
    scanf("%d", &myStudent.regID);
    printf("Enter the cgpa: ");
    scanf("%f", &myStudent.cgpa);

    printf("Name: %s, age: %d, mobile no.: %d, reg id: %d, cgpa: %.2f", myStudent.name, myStudent.age, myStudent.mobile, myStudent.regID, myStudent.cgpa);
    printf("\nSize of structure: %d", sizeof(myStudent));
    return 0;
}

//_________________________________________

#include <string.h>
#include <stdio.h>
union data
{
    int i;
    float f;
    char str[20];
};
int main()
{
    union data Data;
    printf("memory size occupied by data: %d\n", sizeof(Data));
    Data.i = 10;
    printf("Data.i : %d\n", Data.i);
    return 0;
}
