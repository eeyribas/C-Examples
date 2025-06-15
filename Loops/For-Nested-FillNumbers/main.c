#include <stdio.h>
#include <conio.h>

int Fill(int);

int main()
{
    int number;
    printf("Enter number : ");
    scanf(" %d", &number);
    printf(" ", Fill(number));

    getch();
    return 0;
}

int Fill(int number)
{
	for (int i = 1; i <= number; i += 2) {
        for (int j = 0; j < (number - i) / 2; j++) {
            printf(" ");
            for (int k = 0; k < i; k++)
                printf("#");
            printf("\n");
        }
    }
}
