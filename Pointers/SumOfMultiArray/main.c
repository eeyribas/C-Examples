#include <stdio.h>

#define ROWS 3
#define COLS 4

void SumRows(int ar[][COLS], int rows);
void SumCols(int ar[][COLS], int cols);
int Sum2d(int (*ar)[COLS], int rows);

int main(void)
{
    int junk[ROWS][COLS] = {{2,4,6,8}, {3,5,7,9}, {12,10,8,6} };
    SumRows(junk, ROWS);
    SumCols(junk, ROWS);
    printf("Sum of all elements = %d\n", Sum2d(junk, ROWS));

    return 0;
}

void SumRows(int ar[][COLS], int rows)
{
    int tot;
    for(int r = 0; r < rows; r++){
        tot = 0;
        for(int c = 0; c < COLS; c++)
            tot += ar[r][c];
        printf("row %d: sum = %d\n", r, tot);
    }
}

void SumCols(int ar[][COLS], int rows)
{
    int tot;
    for(int c = 0; c < COLS; c++){
        tot = 0;
        for(int r = 0; r < rows; r++)
            tot += ar[r][c];
        printf("col %d: sum = %d\n", c, tot);
    }
}

int Sum2d(int ar[][COLS], int rows)
{
    int tot = 0;
    for(int r = 0; r < rows; r++){
       for(int c = 0; c < COLS; c++)
            tot += ar[r][c];
    }

    return tot;
 }
