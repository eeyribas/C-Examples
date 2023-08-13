#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	for(int i = 1; i <= 20; i++){
		printf("%10d", 1 + (rand() % 6));
		if(i % 5 == 0)
            printf("\n");
	}

	getch();
	return 0;
}
