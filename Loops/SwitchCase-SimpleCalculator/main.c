#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
	char ch;
	printf("Choose process :\n");
	printf("+, -, *, /\n");
	scanf("%c", &ch);
	printf("\nEnter integer : ");
	scanf("%d", &a);
	printf("\nEnter integer : ");
	scanf("%d", &b);

	switch (ch) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            printf("%d / %d = %d\n", a, b, a / b);
            break;
        default:
            printf("You entered an invalid transaction!!!!\n");
	}

	getch();
    return 0;
}
