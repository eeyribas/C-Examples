#include<conio.h>
#include<stdio.h>

#define row 4
#define col 3

int main(){
	int i, j;
	for(i=0; i<row; i++)
    {
		printf(" %d. row=%d ", i, i);
		for(j=0; j<col; j++)
		{
			printf(" %d. col=%d ", j, j);
		}
		printf("\n\n");
	}

	getch();
	return 0;
}
