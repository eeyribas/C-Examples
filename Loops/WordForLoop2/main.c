#include<stdio.h>
#include<conio.h>

int main(){
	int i, j;
	int row, col;
	printf("Row = ");
	scanf("%d", &row);
	printf("\nColumn = ");
	scanf("%d", &col);

	for(i=0; i<row; i++)
    {
		printf("%d", i);
		for(j=0; j<col; j++)
		{
			printf("%d", j);
		}
		printf("\n\n");
	}

	getch();
	return 0;
}
