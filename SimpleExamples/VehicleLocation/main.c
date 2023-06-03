#include<stdio.h>

int main()
{
    int distance = 450;
    int vehicle1_speed = 40;
    int vehicle2_speed = 65;
    int vehicle1_location = 120;
    int vehicle2_location = 0;
    int hour = 0;

    printf("hour\t\t");
    printf("1.vehicle location\t");
    printf("2.vehicle location\n");
    printf("-------\t\t------\t\t------\n\n");

    do {
        hour++;
        vehicle1_location += vehicle1_speed;
        vehicle2_location += vehicle2_speed;

        printf("%d\t\t", hour);
        (vehicle1_location < distance) ? printf("%d\t\t",
        vehicle1_location) : printf("have vehicle\t");
        (vehicle2_location < distance) ? printf("%d", vehicle2_location) :
        printf("have vehicle");
        printf("\n");
    } while(vehicle1_location < distance || vehicle2_location < distance);

    return 0;
}

