#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
	char c;

Number:
	printf("\nEnter number = ");
	scanf("%d", &a);

	switch (a) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        default:
            printf("Exception!");
            break;
	}
	printf("\nWould you like to try again (e / h) ?");

	if (c = getch() == 'e')
		goto Number;
	else
		printf("BYE");

	getch();
	return 0;
}
