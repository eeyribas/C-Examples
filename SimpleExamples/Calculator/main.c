#include <stdio.h>
#include <conio.h>

int Sum(int, int);
int Subtraction(int, int);
int Multiplication(int, int);
int Divide(int, int);

int main()
{
	int x_1, x_2, select;
	printf("First number = ");
	scanf("%d", &x_1);
	printf("Second number = ");
	scanf("%d", &x_2);
	printf("*****Selection*****\n");
	printf("1-Sum\n2-Subtraction\n3-Multiplication\n4-Divide\n");
	scanf("%d", &select);

	switch (select) {
        case 1:
            printf("Sum = %d", Sum(x_1, x_2));
            break;
        case 2:
            printf("Subtraction = %d", Subtraction(x_1, x_2));
            break;
        case 3:
            printf("Multiplication = %d", Multiplication(x_1, x_2));
            break;
        case 4:
            if (x_2 == 0) {
                printf("Second number = ");
                scanf("%d", &x_2);
            }
            printf("Divide = %d", Divide(x_1, x_2));
            break;
        default:
            printf("Enter 1, 2, 3 and 4 values!");
            break;
	}

	getch();
	return 0;
}

int Sum(int x_1, int x_2)
{
	return x_1 + x_2;
}

int Subtraction(int x_1, int x_2)
{
	return x_1 - x_2;
}

int Multiplication(int x_1, int x_2)
{
	return x_1 * x_2;
}

int Divide(int x_1, int x_2)
{
	return x_1 / x_2;
}
