#include <stdio.h>
#include <conio.h>

int main()
{
    int new_number, sum = 0, average = 0, count = 0;
    printf("Enter new number = ");
    scanf("%d", &new_number);

    do{
        sum += new_number;
        count++;
        printf("Enter new number = ");
        scanf("%d", &new_number);
    }while(new_number != 999);

    average = sum / count;
    printf("\nAverage Value = %d", average);

    getch();
    return 0;
}
