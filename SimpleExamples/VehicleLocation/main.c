#include <stdio.h>
#include <conio.h>

int main()
{
    int vec_speed_1 = 40;
    int vec_speed_2 = 65;
    int vec_loc_1 = 120;
    int vec_loc_2 = 0;
    int hour = 0;
    int distance = 450;

    printf("hour\t\t");
    printf("1.vehicle location\t");
    printf("2.vehicle location\n");
    printf("-------\t\t------\t\t------\n\n");

    do {
        hour++;
        vec_loc_1 += vec_speed_1;
        vec_loc_2 += vec_speed_2;

        printf("%d\t\t", hour);
        (vec_loc_1 < distance) ? printf("%d\t\t", vec_loc_1) : printf("have vehicle\t");
        (vec_loc_2 < distance) ? printf("%d", vec_loc_2) : printf("have vehicle");
        printf("\n");
    } while (vec_loc_1 < distance || vec_loc_2 < distance);

    getch();
    return 0;
}
