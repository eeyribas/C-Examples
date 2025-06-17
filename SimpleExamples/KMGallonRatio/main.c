#include <stdio.h>
#include <conio.h>

int main()
{
    int km, gallon;
    printf("Gallon (Exit = -1) = ");
    scanf("%d", &gallon);
    printf("Km = ");
    scanf("%d", &km);

    float sum = 0;
    int count = 0;
    while (gallon != -1) {
        float calc = (float)km / gallon;
        printf("Km / Gallon = %.2f", calc);
        sum = sum + calc;
        count++;
        printf("\n\nGallon (Exit = -1) = ");
        scanf("%d", &gallon);
        printf("Km = ");
        scanf("%d", &km);
    }

    float ratio = sum / count;
    printf("Sum Average Km / Gallon = ", ratio);

    getch();
    return 0;
}
