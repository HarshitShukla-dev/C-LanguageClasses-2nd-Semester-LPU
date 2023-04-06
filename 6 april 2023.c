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
};

struct employee emp1, emp2, *ptr1, *ptr2;
int main()
{

    ptr1 = &emp1;
    ptr2 = &emp2;

    printf("First Employee:\n");
    printf("The name of first Employee (emp1): ");
    scanf("%s", &ptr1->name);
    printf("The id of first Employee (emp1): ");
    scanf("%d", &ptr1->id);
    printf("The age of first Employee (emp1): ");
    scanf("%d", &ptr1->age);
    printf("The gender of first Employee (emp1): ");
    scanf("%s", &ptr1->gender);
    printf("The city of first Employee (emp1): ");
    scanf("%s", &ptr1->city);

    printf("\n");

    printf("Second Employee:\n");
    printf("The name of Second Employee (emp2): ");
    scanf("%s", &ptr2->name);
    printf("The id of Second Employee (emp2): ");
    scanf("%d", &ptr2->id);
    printf("The age of Second Employee (emp2): ");
    scanf("%d", &ptr2->age);
    printf("The gender of Second Employee (emp2): ");
    scanf("%s", &ptr2->gender);
    printf("The city of Second Employee (emp2): ");
    scanf("%s", &ptr2->city);

    printf("The Details of First Employee:\n");
    printf("Name: %s\n", emp1.name);
    printf("Id: %d\n", emp1.id);
    printf("Age: %d\n", emp1.age);
    printf("Gender: %s\n", emp1.gender);
    printf("City: %s\n", emp1.city);

    printf("\n");

    printf("The Details of Second Employee:\n");
    printf("Name: %s\n", emp2.name);
    printf("Id: %d\n", emp2.id);
    printf("Age: %d\n", emp2.age);
    printf("Gender: %s\n", emp2.gender);
    printf("City: %s\n", emp2.city);
    return 0;
}