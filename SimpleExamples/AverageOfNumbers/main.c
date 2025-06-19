#include <stdio.h>
#include <conio.h>

int main()
{
    int new_number;
    printf("Enter new number = ");
    scanf("%d", &new_number);

    int sum = 0, count = 0;
    do {
        sum += new_number;
        count++;
        printf("Enter new number = ");
        scanf("%d", &new_number);
    } while (new_number != 999);

    int average = sum / count;
    printf("\nAverage Value = %d", average);

    getch();
    return 0;
}
