#include <stdio.h>
#define N 9

int main()
{
	int A[N] = {7,3,5,8,2,9,4,15,6};
	int k, enk;

	printf("Before : ");
	for(int k = 0; k < N; k++)
        printf("%5d ", A[k]);

	for(int i = 0; i < N - 1; i++){
		enk = A[N - 1];
		k = N - 1;
        for(int j = i; j < (N - 1); j++)
            if(enk > A[j]){
                enk = A[j];
                k = j;
            }
			A[k] = A[i];
			A[i] = enk;
    }
	printf("\nAfter : ");
	for(k = 0; k < N; k++)
        printf("%5d ", A[k]);
	printf("\n");

    return 0;
}
