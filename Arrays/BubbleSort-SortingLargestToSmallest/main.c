#include <stdio.h>

#define N 10

int main()
{
    int a[N] = {100, -250, 400, 125 ,550, 900, 689, 450, 347, 700};

	printf("Before : ");
	for (int i = 0; i < N; i++)
        printf("%5d ", a[i]);

	for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (a[j + 1] > a[j]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
	}

    printf("\nAfter: ");
	for (int i = 0; i < N; i++)
        printf("%5d ", a[i]);
	printf("\n");

	getch();
    return 0;
}
