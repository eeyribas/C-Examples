#include <stdio.h>
#include <conio.h>

unsigned int Factorial(unsigned int number);

int main()
{
    unsigned int number;
    puts("Integer : ");
    scanf("%d", &number);

 	if (number > 8 || number < 1) {
       printf("Error!");
    } else {
        unsigned int result = Factorial(number);
 		printf("%u Factorial = %u\n", number, result);
    }

    getch();
    return 0;
}

unsigned int Factorial(unsigned int number)
{
 	if (number == 1) {
        return 1;
    } else {
		number *= Factorial(number - 1);
		return number;
    }
}
