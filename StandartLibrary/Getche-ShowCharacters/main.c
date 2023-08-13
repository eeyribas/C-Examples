#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char x;
	do{
        printf("Enter Character = ");
		x = _getche();
		printf("\n");
	} while(x != 'a');

	getch();
	return 0;
}
