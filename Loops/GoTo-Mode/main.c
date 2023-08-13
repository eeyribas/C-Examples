#include <stdio.h>
#include <conio.h>

int main()
{
    int limit = 10;
	int number;
	int single = 0;
	int doubler = 0;

	for(int i = 0; i < limit; i++){
		printf("Enter number = ");
		scanf("%d", &number);
		if(number % 2 == 0)
            doubler++;
		if(number % 2 == 1)
            single++;
		if(number == 0)
            goto Last;
	}

Last:
	printf("\nDouble number = %d\n", doubler);
	printf("\nSingle number = %d\n", single);

	getch();
	return 0;
}
