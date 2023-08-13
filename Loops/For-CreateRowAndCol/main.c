#include <stdio.h>
#include <conio.h>

int main()
{
	int row, col;
	printf("Row = ");
	scanf("%d", &row);
	printf("\nColumn = ");
	scanf("%d", &col);

	for(int i = 0; i < row; i++){
		printf("%d", i);
		for(int j = 0; j < col; j++)
            printf("%d", j);
		printf("\n\n");
	}

	getch();
	return 0;
}
