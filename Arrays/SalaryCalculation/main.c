#include<stdio.h>
#include<conio.h>

#define EMPLOYEE_COUNT 6

int SalaryCalc(int);

int main()
{
	int salary[EMPLOYEE_COUNT]={600, 500, 1000, 2000, 100, 850};
	int i, sum=0;

	printf("*****SALARY*****\n");
	for(i=0; i<EMPLOYEE_COUNT; i++)
		printf("%3d\n", salary[i]);

	printf("\n*****EMPLOYEE SALARY*****\n");
	for(i=0; i<EMPLOYEE_COUNT; i++){
		sum=salary[i];
        printf("%3d\n", SalaryCalc(sum));
	}

	getch();
	return 0;
}

int SalaryCalc(int a)
{
	int pay, i;
	pay=(a/100*9)+200;

	return pay;
}
