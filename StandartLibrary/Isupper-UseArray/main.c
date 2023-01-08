#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
	char array[50]="**Learn C programming, Happy!...***";
	int i, count=0;

	printf(" Upper case : ");
	for(i=0; array[i] != '\0'; i++){
		if(isupper(array[i])){
			printf("\n %c", array[i]);
			count++;
		}
	}
	printf("\n Upper case count = %d", count);

	getch();
	return 0;
}
