#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void Card(int[][13]);
void Distribute(const int[][13], const char *[], const char*[]);

int main()
{
	const char *team[4] = {"Cup", "Karo", "Club", "Maca"};
	const char *party[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Vale", "Girl", "Priest"};

	int deck[4][13] = {0};
	srand(time(NULL));
	Card(deck);
	Distribute(deck, party, team);

	getch();
	return 0;
}

void Card(int array[][13])
{
	int row, column;
	for (int i = 1; i <= 52; i++) {
		do {
            row = rand() % 4;
			column = rand() % 13;
		} while (array[row][column] != 0);
		array[row][column] = i;
	}
}

void Distribute(const int array[][13], const char *party[], const char *team[])
{
	for (int i = 1; i <= 52; i++) {
       for (int j = 0; j <= 3; j++) {
            for (int k = 0; k <= 12; k++) {
                if (array[j][k] == i)
					printf("%5s of %-8s%c", party[j], team[k], i % 2 == 0 ? '\n' : '\t');
            }
        }
	}
}
