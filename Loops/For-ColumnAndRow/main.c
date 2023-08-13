#include <conio.h>
#include <stdio.h>

#define ROW 4
#define COL 3

int main()
{
	for(int i = 0; i < ROW; i++){
		printf(" %d. ROW=%d ", i, i);
		for(int j = 0; j < COL; j++)
			printf(" %d. COL=%d ", j, j);
		printf("\n\n");
	}

	getch();
	return 0;
}
