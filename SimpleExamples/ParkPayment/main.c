#include<stdio.h>
#include<conio.h>
#include<math.h>

int Calc(int);

int main(){

	int hour;
	do
	{
        printf("Hour=");
        scanf("%d", &hour);
        printf("Payment = %d $\n\n", Calc(hour));
	} while(hour != 0);

	getch();
	return 0;
}

int Calc(int a){

	double pay;
	if(a<=3)
    {
		pay=2;
	}
	else if(a<24)
	{
		pay = 2 + ((a-3)*1);
	}
	else
        pay=25;

	return pay;
}
