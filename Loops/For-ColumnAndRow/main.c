#include<conio.h>
#include<stdio.h>

#define ROW 4
#define COL 3

int main()
{
	int i, j;
	for(i=0; i<ROW; i++){
		printf(" %d. ROW=%d ", i, i);
		for(j=0; j<COL; j++){
			printf(" %d. COL=%d ", j, j);
		}
		printf("\n\n");
	}

	getch();
	return 0;
}
