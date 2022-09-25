#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	double d;

	d=atof("99.0");
	printf("%s%.3f\n%s%.3f\n", "\"99.0\ convert string to double =",
		d, "divide double value by two=", d/2.0);

	getch();
	return 0;
}
