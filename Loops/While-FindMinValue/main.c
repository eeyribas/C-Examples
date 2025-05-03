#include <stdio.h>

int Min(int, int);

int main()
{
    int number_1, number_2;
    printf("Enter integer (exit = q) : \n");

 	while (scanf("%d %d", &number_1, &number_2) == 2) {
        printf("Numbers: %d and %d Min: %d\n", number_1, number_2,
               Min(number_1, number_2));
        printf("Enter integer (exit = q):\n ");
 	}

 	getch();
    return 0;
}

int Min(int n, int m)
{
    int min;
    if (n < m)
        min = n;
    else
        min = m;

 	return min;
}
