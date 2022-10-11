#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int N;
	int i;
	int *notes;
	double average;
	int sum=0;

	printf("Students Count = ");
	scanf("%d", &N);

	notes= malloc(N * sizeof(int));

	for(i=0; i<N; i++){
		printf("Student note = ");
		scanf("%d", &notes[i]);
	}

	sum=0;
	for(i=0; i<N; i++){
		sum += notes[i];
	}

	average = sum / N;

	printf("Average = %.2f \n", average);

	free(notes);

	getch();
	return 0;

}
