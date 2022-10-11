#include <stdio.h>
#include <stdlib.h>

int random_array[10][10][10];
int a, b, c;

int main()
{
    for (a = 0; a < 10; a++)
	{
        for (b = 0; b < 10; b++)
        {
			for (c = 0; c < 10; c++)
 			{
                random_array[a][b][c] = rand();
			}
        }
    }
    for (a = 0; a < 10; a++)
    {
        for (b = 0; b < 10; b++)
        {
            for (c = 0; c < 10; c++)
            {
                printf("\nRandom_array[%d][%d][%d] = ", a, b, c);
                printf("%d", random_array[a][b][c]);
            }
            printf("\nTo Continue Enter, (Exit - CTRL-C.)");
            getchar();
        }
    }

    return 0;
 }
