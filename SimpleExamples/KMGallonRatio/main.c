#include<stdio.h>
#include<conio.h>

int main()
{
    int km, gallon, count=0;
    float calc=0;
    float sum=0;
    float ratio=0;

    printf("Gallon (Exit=-1) = ");
    scanf("%d", &gallon);
    printf("Km = ");
    scanf("%d", &km);

    while(gallon != -1){
        calc = (float)km / gallon;
        printf("Km/gallon = %.2f", calc);
        sum = sum+calc;
        count++;
        printf("\n\nGallon (Exit=-1) = ");
        scanf("%d", &gallon);
        printf("Km = ");
        scanf("%d", &km);
    }
    ratio=sum/count;
    printf("Sum average km/gallon=", ratio);

    getch();
    return 0;
}
