#include <stdio.h>
#include <conio.h>

void Gcd(int, int);

int main()
{
    int number_1, number_2;
    printf("First number : ") ;
    scanf("%d", &number_1) ;
    printf("Second number : ");
    scanf("%d", &number_2);

    Gcd(number_1, number_2);

    getch();
    return 0 ;
}

void Gcd(int number_1, int number_2)
{
    for (int i = number_1 + number_2; i > 0; i--) {
        if ((number_1 % i == 0) && (number_2 % i == 0)) {
            printf( "Gcd : %d\n", i);
            break;
        }
    }
}
