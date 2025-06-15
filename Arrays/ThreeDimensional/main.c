#include <stdio.h>
#include <stdlib.h>

int main()
{
    int random_array[10][10][10];

    for (int a = 0; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
			for (int c = 0; c < 10; c++)
                random_array[a][b][c] = rand();
        }
    }

    for (int a = 0; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
            for (int c = 0; c < 10; c++) {
                printf("\nRandom_array[%d][%d][%d] = ", a, b, c);
                printf("%d", random_array[a][b][c]);
            }
            printf("\nTo Continue Enter, (Exit - CTRL-C.)");
            getchar();
        }
    }

    return 0;
 }
