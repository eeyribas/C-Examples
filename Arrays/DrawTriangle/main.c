#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char array[100][100];
    int row;
    printf("Row Count = ");
    scanf("%d", &row);

    for(int j = 0; j < 50;j++){
        for(int i = 0; i < 50; i++)
            array[j][i]=' ';
    }

    for(int i = 3, j = row - 1; i < row; i++, j--){
        array[1][i] = '*';
        array[1][2 * row - 2 - i] = '*';
        array[i - 2][i] = '*';
        array[i - 2][2 * row - 2 - i] = '*';
    }

    for(int i = 0, j = row - 1; i < row; i++, j--){
        array[0][i] = '-';
        array[0][2 * row - 2 - i] = '-';
        array[i][i] = '\\';
        array[i][2 * row - 2 - i] = '/';
    }

    array[0][0] = '*';
    array[0][2 * row - 2] = '*';
    array[row - 1][row - 1] = '*';
    for(int i = 0; i < row; i++){
        for(int j = 0; j < (2 * row - 1); j++)
            printf("%c", array[i][j]);
        printf("\n");
    }

	getch();
    return 0;
}
