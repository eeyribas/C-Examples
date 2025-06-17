#include <stdio.h>
#include <conio.h>

int main()
{
    int number = 0;
    printf("Enter number : ");
    scanf("%d", &number);
    if (number < 0) {
        printf("You must enter a positive number!");
        return 0;
    }

    int index = 2;
    while (index < number / 2) {
        if (number % index == 0) {
            printf("%d is not a prime number!", number);
            scanf("%d", &number);
            return 0;
        }

        index++;
    }

    printf("%d is prime number!", number);

    getch();
    return 0;
}
