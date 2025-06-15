#include <stdio.h>

#define ROWS 3
#define COLS 4

void SumRows(int array[][COLS], int rows);
void SumCols(int array[][COLS], int cols);
int Sum2d(int (*array)[COLS], int rows);

int main(void)
{
    int junk[ROWS][COLS] = {{2, 4, 6, 8}, {3, 5, 7, 9},
                            {12, 10, 8, 6}};
    SumRows(junk, ROWS);
    SumCols(junk, ROWS);
    printf("Sum of all = %d\n", Sum2d(junk, ROWS));

    return 0;
}

void SumRows(int array[][COLS], int rows)
{
    int sum;
    for (int i = 0; i < rows; i++) {
        sum = 0;
        for (int j = 0; j < COLS; j++)
            sum += array[i][j];
        printf("row %d: sum = %d\n", i, sum);
    }
}

void SumCols(int array[][COLS], int rows)
{
    int sum;
    for (int i = 0; i < COLS; i++) {
        sum = 0;
        for (int j = 0; j < rows; j++)
            sum += array[j][i];
        printf("col %d: sum = %d\n", i, sum);
    }
}

int Sum2d(int array[][COLS], int rows)
{
    int sum = 0;
    for (int i = 0; i < rows; i++) {
       for (int j = 0; j < COLS; j++)
            sum += array[i][j];
    }

    return sum;
 }
