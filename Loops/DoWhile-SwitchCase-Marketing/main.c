#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    int type;

    do {
        printf("Product Number (Exit = 0) = ");
        scanf("%d", &type);
        switch (type) {
            case 1:
                printf("Product count (a) = ");
                scanf("%d", &a);
                break;
            case 2:
                printf("Product count (b) = ");
                scanf("%d", &b);
                break;
            case 3:
                printf("Product count (c) = ");
                scanf("%d", &c);
                break;
            case 4:
                printf("Product count (d) = ");
                scanf("%d", &d);
                break;
            case 5:
                printf("Product count (e) = ");
                scanf("%d", &e);
                break;
            default:
                printf("1-5 enter number!!!");
                break;
        }
    } while(type != 0);

    int sum = (a * 2) + (b * 4) + (c * 9) + (d * 4) + (e * 6);
    printf("\n\nSum = %d", sum);

    getch();
    return 0;
}
