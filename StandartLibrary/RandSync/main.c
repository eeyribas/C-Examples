#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>


int main(){
	srand(time(NULL));

	int a=rand() % 6;
	int b= rand() % 6;

	if(a==b)
		printf("Sync!");

	printf("%d , %d", a, b);

	getch();
	return 0;
}
