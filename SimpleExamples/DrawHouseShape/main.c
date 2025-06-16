#include <stdio.h>
#include <conio.h>

int main()
{
    int house_width;
    printf("Width : ");
    scanf("%d", &house_width);

    int house_height = house_width / 2;
    int roof_height = house_height / 2 + 1;
    int roof_width = house_width;
    int window_width = roof_height;
    int door_width = roof_height;
    int window_height = door_width / 2 + 1;
    int door_height = door_width / 2 + 1;
    int house = house_width / 2;
    int window = window_width / 2;
    int l = roof_width / 2;
    int k = 0;

    for (int i = 0; i < roof_height; i++) {
        for (int j = 0; j < l; j++)
            printf(" ");

        for (int j = 0; j < k; j++)
            printf("/");
        printf("+");

        for (int j = 0; j < k; j++)
            printf("\\");

        for (int j = 0; j < l; j++)
            printf(" ");
        printf("\n");

        l = l - 2;
        k = k + 2;
    }

    for (int i = 0; i < (house_height - door_height - window_height) / 2; i++) {
        for (int j = 0; j < house_width; j++)
            printf("0");
        printf("\n");
    }

    for (int i = 0; i < window_height / 2; i++) {
        for (int j = 0; j < (house - window_width) / 2; j++)
            printf("0");

        for (int j = 0; j < window; j++)
            printf(" ");
        printf("+");

        for (int j = 0; j < window; j++)
            printf(" ");

        for (int j = 0; j < (house - window_width) / 2; j++)
            printf("0");

        if ((((house_width - 1) / 2 - window_width) / 2) % 2) {
            for (int j = 0; j < 3; j++)
                printf("0");
        } else {
            printf("0");
        }

        for (int j = 0; j < (house - window_width) / 2; j++)
            printf("0");

        for (int j = 0; j < window; j++)
            printf(" ");
        printf("+");

        for (int j = 0; j < window; j++)
            printf(" ");

        for (int j = 0; j < (house - window_width) / 2; j++)
            printf("0");
        printf("\n");
    }

    for (int i = 0; i < (house - window_width) / 2; i++)
        printf("0");

    for (int i = 0; i < (window * 2) + 1; i++)
        printf("+");

    for (int i = 0; i < (house - window_width) / 2; i++)
        printf("0");

    if ((((house_width - 1) / 2 - window_width) / 2) % 2){
        for (int i = 0; i < 3; i++)
            printf("0");
    } else {
        printf("0");
    }

    for (int i = 0; i < (house - window_width) / 2; i++)
        printf("0");

    for (int i = 0; i < (window * 2) + 1; i++)
        printf("+");

    for (int i = 0; i < (house - window_width) / 2; i++)
        printf("0");
    printf("\n");

    for (int i = 0; i < window_height / 2; i++) {
        for (int j = 0; j < (house - window_width) / 2; j++)
            printf("0");

        for (int j = 0; j < window; j++)
            printf(" ");
        printf("+");

        for (int j = 0; j < window; j++)
            printf(" ");

        for (int j = 0; j < (house - window_width) / 2; j++)
            printf("0");

        if ((((house_width - 1) / 2 - window_width) / 2) % 2) {
            for (int j = 0; j < 3; j++)
                printf("0");
        } else {
            printf("0");
        }

        for (int j = 0; j < (house - window_width) / 2; j++)
            printf("0");

        for (int j = 0; j < window; j++)
            printf(" ");
        printf("+");

        for (int j = 0; j < window; j++)
            printf(" ");

        for (int j = 0; j < (house - window_width) / 2; j++)
            printf("0");
        printf("\n");
    }

    for (int i = 0; i < (house_height - door_height - window_height) / 2; i++) {
        for (int j = 0; j < house_width; j++)
            printf("0");
        printf("\n");
    }

    for (int i = 0; i < door_height; i++) {
        for (int j = 0; j < (house_width - door_width) / 2; j++)
            printf("0");

        for (int j = 0; j < door_width / 2; j++)
            printf(" ");
        printf("+");

        for (int j = 0; j < door_width / 2; j++)
            printf(" ");

        for (int j = 0; j < (house_width - door_width) / 2; j++)
            printf("0");
        printf("\n");
    }

    getch();
    return 0;
}
