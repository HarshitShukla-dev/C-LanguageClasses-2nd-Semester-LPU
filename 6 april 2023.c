#include <stdio.h>
struct car{
    char name[20];
    int seats;
    float price;
};
int main(){
    struct car myCar;
    printf("Enter the car name: ");
    scanf("%s", myCar.name);
    printf("Enter the number of seats: ");
    scanf("%d", &myCar.seats);
    printf("Enter the price: ");
    scanf("%f", &myCar.price);
    printf("%s %d %f\n", myCar.name, myCar.seats, myCar.price);
    return 0;
}

//_________________________________________

