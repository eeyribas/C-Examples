#include<stdio.h>
#include<conio.h>
#define PI 3.14159

int main(){
    int r, env, area, volume;

    printf("r = ");
    scanf("%d", &r);

    env = 2 * PI * r;
    area = PI * r* r;
    volume = 4 * PI *r*r/3;

    printf("Environment = %d\n", env);
    printf("Area = %d\n", area);
    printf("Volume = %d,", volume);

    getch();
    return 0;
}
