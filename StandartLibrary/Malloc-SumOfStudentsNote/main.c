#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int N;
	printf("Students Count = ");
	scanf("%d", &N);

	int *notes = malloc(N * sizeof(int));
    for(int i = 0; i < N; i++){
		printf("Student note = ");
		scanf("%d", &notes[i]);
	}

	double sum = 0;
	for(int i = 0; i < N; i++)
		sum += notes[i];

	double average = sum / N;
	printf("Average = %.2f \n", average);
	free(notes);

	getch();
	return 0;

}
