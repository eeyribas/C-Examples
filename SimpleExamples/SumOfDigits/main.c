#include <stdio.h>
#include <conio.h>

int main()
{
    int sum = 0;

    int number;
    printf("Enter number (Four Digits) : ");
    scanf("%d", &number);

    int section = number / 1000;
    sum += section;
    int rem = number % 1000;

    section = rem / 100;
    sum += section;
    rem = rem % 100;

    section = rem / 10;
    sum += section;
    rem = rem % 10;
    sum += rem;

    printf("Result = %d", sum);

    getch();
    return 0;
}
