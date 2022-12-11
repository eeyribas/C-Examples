#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	srand(time(NULL));

	int a=rand() % 10 +1;

	printf("Random = %d", a);

	getch();
	return 0;
}
