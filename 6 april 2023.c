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

//_________________________________________

#include <stdio.h>
union student
{
    char name[20];
    int age;
    int mobile;
    int regid;
    float cgpa;
};
int main()
{
    union student st1;

    printf("Enter the name: ");
    scanf("%s", &st1.name);
    printf("Enter the age: ");
    scanf("%d", &st1.age);
    printf("Enter the mobile number: ");
    scanf("%d", &st1.mobile);
    printf("Enter the regid: ");
    scanf("%d", &st1.regid);
    printf("Enter the cgpa: ");
    scanf("%f", &st1.cgpa);
    printf("%s %d %d %f", st1.name, st1.age, st1.mobile, st1.cgpa);
    printf("\nThe size of variable str1 is: %d", sizeof(st1));
}

//_______________________________________

#include <stdio.h>
struct employee
{
    char name[30];
    int id;
    int age;
    char gender[30];
    char city[40];
}; // define the variables of the structure with pointers
struct employee emp1, emp2, *ptr1, *ptr2;
int main()
{
    // store adres of emp1 and emp2 structure variable
    ptr1 = &emp1;
    ptr2 = &emp2;
    printf("enter the name of the employe(emp1);")
}