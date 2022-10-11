#include<stdio.h>
#include<conio.h>

#define employee_count 6

int SalaryCalc(int);

int main(){
	int salary[employee_count]={600, 500, 1000, 2000, 100, 850};
	int i, sum=0;

	printf("*****SALES*****\n");
	for(i=0; i<employee_count; i++)
		printf("%3d\n", salary[i]);

	printf("\n*****EMPLOYEE SALES*****\n");
	for(i=0; i<employee_count; i++){
		sum=salary[i];
        printf("%3d\n", SalaryCalc(sum));
	}

	getch();
	return 0;
}

int SalaryCalc(int a){
	int pay, i;
	pay=(a/100*9)+200;

	return pay;
}
