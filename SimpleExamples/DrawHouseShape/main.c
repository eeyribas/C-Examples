#include <stdio.h>
#include <conio.h>

int main()
{
    int house_width, house_height, roof_width, roof_height, window_width, window_height, door_width, door_height, house, window;

    printf("Width : ");
    scanf("%d", &house_width);
    house_height = house_width / 2;
    roof_height = house_height / 2 + 1;
    roof_width = house_width;
    window_width = roof_height;
    door_width = roof_height;
    window_height = door_width / 2 + 1;
    door_height = door_width / 2 + 1;
    house = house_width / 2;
    window = window_width / 2;
    int l = roof_width / 2;
    int k = 0;

    for(int i = 0 ; i < roof_height; i++){
        for(int j = 0 ; j < l ; j++)
            printf(" ");
        for(int m = 0 ; m < k ; m++)
            printf("/");
        printf("+");
        for(int m = 0 ; m < k ; m++)
            printf("\\");
        for(int j = 0 ; j < l ; j++)
            printf(" ");
        printf("\n");
        l = l - 2;
        k = k + 2;
    }

    for(int z = 0 ; z < (house_height - door_height - window_height ) / 2; z++){
        for(int a = 0 ; a < house_width; a++)
            printf("0");
        printf("\n");
    }

    for(int z = 0 ; z < window_height / 2; z++){
        for(int i = 0 ; i < (house - window_width) / 2; i++)
            printf("0");
        for(int j = 0; j < window; j++)
            printf(" ");
        printf("+");
        for(int j = 0; j < window; j++)
            printf(" ");
        for(int i = 0; i < (house - window_width) / 2 ; i++)
            printf("0");

        if((((house_width - 1) / 2 - window_width) / 2) % 2){
            for(int t = 0 ; t < 3; t++)
                printf("0");
        } else{
            printf("0");
        }

        for(int i = 0; i < (house - window_width) / 2 ; i++)
            printf("0");
        for(int j = 0; j < window; j++)
            printf(" ");
        printf("+");
        for(int j = 0; j < window; j++)
            printf(" ");
        for(int i = 0; i < (house - window_width) / 2 ; i++)
            printf("0");
        printf("\n");
    }

    for(int i = 0; i < (house - window_width) / 2 ; i++)
        printf("0");

    for(int j = 0; j < (window * 2) + 1 ; j++)
        printf("+");

    for(int i = 0; i < (house - window_width) / 2 ; i++)
        printf("0");

    if((((house_width - 1) / 2 - window_width) / 2) % 2){
        for(int t = 0; t < 3; t++)
            printf("0");
    } else{
        printf("0");
    }

    for(int i = 0; i < (house - window_width) / 2 ; i++)
        printf("0");

    for(int j = 0; j < (window * 2) + 1 ; j++)
        printf("+");

    for(int i = 0; i < (house - window_width) / 2 ; i++)
        printf("0");
    printf("\n");

    for(int z = 0; z < window_height / 2 ; z++ ){
        for(int i = 0; i < (house - window_width) / 2 ; i++)
            printf("0");

        for(int j = 0; j < window; j++)
            printf(" ");
        printf("+");

        for(int j = 0; j < window; j++)
            printf(" ");

        for(int i = 0; i < (house - window_width) / 2 ; i++)
            printf("0");

        if((((house_width - 1) / 2 - window_width) / 2) % 2){
            for(int t = 0; t < 3 ; t++)
                printf("0");
        } else{
            printf("0");
        }

        for(int i = 0; i < (house - window_width) / 2 ; i++)
            printf("0");

        for(int j = 0; j < window; j++)
            printf(" ");
        printf("+");

        for(int j = 0; j < window; j++)
            printf(" ");

        for(int i = 0; i < (house - window_width) / 2 ; i++)
            printf("0");
        printf("\n");
    }

    for(int z = 0; z < (house_height - door_height - window_height) / 2 ; z++){
        for(int a = 0; a < house_width ; a++)
            printf("0");
        printf("\n");
    }

    for(int t = 0; t < door_height ; t++){
        for(int n = 0; n < (house_width - door_width) / 2 ; n++)
            printf("0");

        for(int n = 0; n < door_width / 2 ; n++)
            printf(" ");
        printf("+");

        for(int n = 0; n < door_width / 2 ; n++)
            printf(" ");

        for(int n = 0; n < (house_width - door_width) / 2 ; n++)
            printf("0");
        printf("\n");
    }

    getch();
    return 0;
}
