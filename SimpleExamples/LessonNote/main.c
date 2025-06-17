#include <stdio.h>
#include <conio.h>

int Average(int vize, int finall);
void Classify(int average);

int main()
{
	int vize, finall;
	printf("Vize = ");
	scanf("%d", &vize);
	printf("Enter Final note = ");
	scanf("%d", &finall);
	int average = Average(vize, finall);
	Classify(average);

	getch();
	return 0;
}

int Average(int vize, int finall)
{
	int average = (vize * 40 / 100) + (finall * 60 / 100);

	return average;
}

void Classify(int average)
{
    if (average <= 100 && average >= 90)
        printf("AA");
    else if (average < 90 && average >= 75)
        printf("BA");
    else if (average < 75 && average >= 65)
		printf("BB");
    else if (average < 65 && average >= 55)
		printf("CB");
    else if (average < 55 && average >= 50)
		printf("CC");
    else
		printf("FF\n");
}
