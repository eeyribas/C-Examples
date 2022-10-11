#include<stdio.h>
#include<conio.h>

void Function1(int);
void Function2(int);
void Function3(int);

int main(){
	void (*f[3])(int)={Function1, Function2, Function3};

	int select;

	printf("Choose a number between 0-2 (Exit = 3)= ");
	scanf("%d", &select);

	while(select >= 0 && select<3)
    {
		(*f[select])(select);
		printf("Choose a number between 0-2 (Exit = 3)= ");
		scanf("%d", &select);
	}

	printf("Exit program...");

	getch();
	return 0;
}

void Function1(int a){
	printf("%d call Function1\n\n",a);
}

void Function2(int b){
	printf("%d call Function2\n\n");
}

void Function3(int c){
	printf("%d call Function3\n\n");
}
