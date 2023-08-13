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

void Card(int a[][13])
{
	int row, column;
	for(int card = 1; card <= 52; card++){
		do{
            row = rand() % 4;
			column = rand() % 13;
		} while(a[row][column] != 0);
		a[row][column] = card;
	}
}

void Distribute(const int a[][13], const char *taraf[], const char *takim[])
{
	for(int card = 1; card <= 52; card++){
       for(int row = 0; row <= 3; row++){
            for(int column = 0; column <= 12; column++){
                if(a[row][column] == card)
					printf("%5s of %-8s%c", taraf[row], takim[column], card%2==0 ? '\n' : '\t');
            }
        }
	}
}
