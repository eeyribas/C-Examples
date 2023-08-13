#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	char array[50] = "**Learn C programming, Happy!...***";
	int count = 0;

	printf("\n Lower case : ");
	for(int i = 0; array[i] != '\0'; i++){
		if(islower(array[i])){
			printf("\n %c", array[i]);
			count++;
		}
	}
	printf("\n Lower case count = %d", count);

	getch();
	return 0;
}
