#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main()
{
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX], N;
	printf("Enter the size of the matrix : ");
	scanf("%d", &N);

	printf("-------A Matrix:-----\n");
	for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("A[%d][%d]=", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("-------B Matrix:-----\n");
	for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("B[%d][%d]=", i, j);
            scanf("%d", &B[i][j]);
        }
    }

	printf("-----Multiplication------");
	for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++)
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            printf("%d", C[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
