#include<stdio.h>
#include<conio.h>

int main(){

	int down_limit=0, up_limit=0, square, sum=0;
	printf("Down Limit = ");
	scanf("%d", &down_limit);
	printf("Up Limit = ");
	scanf("%d", &up_limit);

	do{
		square=down_limit*down_limit;
		sum=sum+square;
		down_limit++;
	}while(down_limit <= up_limit);

	printf("Sum = %d", sum);
	getch();
	return 0;
}
