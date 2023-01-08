#include<stdio.h>
#include<conio.h>

#define SIZE 10

int Sum(int *start, int * end);

int main()
{

	int marbles[SIZE]={1, 3, 5, 11, 12, 34, 2, 90, 65,33};
	long answer;
	answer = Sum(marbles, marbles+SIZE);
	printf("Sum = %ld", answer);

	getch();
	return 0;
}

int Sum(int *start, int *end)
{
	int total=0;
	while (start<end){
		total += *start;
		start++;
	}

	return total;
}
