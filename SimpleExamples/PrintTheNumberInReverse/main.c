#include<stdio.h>
#include<conio.h>

void Reverse(int );

int main()
{
    int number;
    printf("Enter number=");
    scanf("%d", &number);
    Reverse(number);

    getch();
    return 0;
}

void Reverse(int number)
{
	int tmp;
	while(number>0){
		tmp = number % 10;
		printf("%d", tmp);
		number = number /10;
	}
}
