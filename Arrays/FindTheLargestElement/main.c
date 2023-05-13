#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[100], N;

	printf("Enter the number of elements of array A : ");
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
	{
		printf("A(%d)=", i);
		scanf("%d", &A[i]);
	}

	int larg = A[1];
	for(int i = 0; i < N; i++)
	{
		if(A[i] > larg)
            larg=A[i];
	}
	printf("Largest element=%d\n", larg);

    return 0;
}
