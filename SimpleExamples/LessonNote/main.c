#include<stdio.h>
#include<conio.h>

int Average(int, int);
void Classify(int);

int main()
{
	int vize, finall, average;

	printf("Vize = ");
	scanf("%d", &vize);
	printf("Enter Final note = ");
	scanf("%d", &finall);
	average = Average(vize, finall);
	Classify(average);

	getch();
	return 0;
}

int Average(int a, int b)
{
	int av;
	av = (a*40/100) + (b*60/100);

	return av;
}

void Classify(int ave)
{
    if(ave<=100 && ave>=90){
		printf("AA");
    }
    else if(ave<90 && ave>=75){
        printf("BA");
    }
    else if(ave<75 && ave>=65){
		printf("BB");
    }
    else if(ave<65 && ave>=55){
		printf("CB");
    }
    else if(ave<55 && ave>=50){
		printf("CC");
    }
    else {
		printf("FF\n");
    }
}
