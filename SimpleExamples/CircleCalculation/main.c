#include <stdio.h>
#include <conio.h>

#define PI 3.14159

int main()
{
    int r;
    printf("r = ");
    scanf("%d", &r);

    int env = 2 * PI * r;
    int area = PI * r* r;
    int volume = 4 * PI * r * r / 3;
    printf("Environment = %d\n", env);
    printf("Area = %d\n", area);
    printf("Volume = %d", volume);

    getch();
    return 0;
}
