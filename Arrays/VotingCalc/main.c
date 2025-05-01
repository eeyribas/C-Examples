#include <stdio.h>
#include <conio.h>

#define ANSWER 40
#define FREQ 11

int main()
{
	int ans[ANSWER] = {1, 1, 2, 3, 2, 2, 2, 5, 6, 7, 8, 9, 10,
                       1, 1, 1, 3, 3, 3, 1, 1, 3, 4, 6, 4, 5,
                       6, 6, 8, 1, 2, 3, 5, 7, 9, 9, 9, 10, 1, 5};
	int freq[FREQ] = {0};

	for (int i = 0; i < ANSWER; i++)
        ++freq[ans[i]];

	printf("%s%13s\n", "Voting", "Freq");
	for (int i = 1; i < FREQ; i++)
       printf("%6d%14d\n", i, freq[i]);

	getch();
	return 0;
}
