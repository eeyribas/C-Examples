#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

int main()
{
	int face, freq[SIZE] = {0};
	srand(time(NULL));

	for(int to_dice = 1; to_dice <= 6000; to_dice++){
		face = rand() % 6 + 1;
		++freq[face];
	}

	printf("%s%17s\n", "Face", "Freq");
	for(face = 1; face <= SIZE; face++)
		printf("%3d%17d\n", face, freq[face]);

	getch();
	return 0;
}
