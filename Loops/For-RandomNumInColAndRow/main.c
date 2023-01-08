#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 5
#define COL 6

int main()
{
	int i, j;
	int num;
	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			num=rand() % 15;
			printf("%d\t", num);
        }
		printf("\n");
	}

	getch();
	return 0;
}
