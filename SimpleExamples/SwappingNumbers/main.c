#include <stdio.h>
#include <conio.h>

void Swapping(int number_1, int number_2);

int main(void)
{
    int number_1 = 5, number_2 = 10;
    printf("Originally Number-1 = %d and Number-2 = %d\n", number_1, number_2);
    Swapping(number_1, number_2);

    getch();
    return 0;
}

void Swapping(int number_1, int number_2)
{
    int temp = number_1;
    number_1 = number_2;
    number_2 = temp;
    printf("Now Number-1 = %d and Number-2 = %d\n", number_1, number_2);
}
