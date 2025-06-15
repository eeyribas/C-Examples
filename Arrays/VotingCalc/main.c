#include <stdio.h>
#include <conio.h>

#define ARRAY_SIZE 40
#define FREQ_SIZE 11

int main()
{
	int arr[ARRAY_SIZE] = {1, 1, 2, 3, 2, 2, 2, 5, 6, 7, 8, 9, 10,
						   1, 1, 1, 3, 3, 3, 1, 1, 3, 4, 6, 4, 5,
						   6, 6, 8, 1, 2, 3, 5, 7, 9, 9, 9, 10, 1, 5};
	int freq[FREQ_SIZE] = {0};

	for (int i = 0; i < ARRAY_SIZE; i++)
        ++freq[arr[i]];

	printf("%s%13s\n", "Voting", "Freq");
	for (int i = 1; i < FREQ_SIZE; i++)
       printf("%6d%14d\n", i, freq[i]);

	getch();
	return 0;
}
