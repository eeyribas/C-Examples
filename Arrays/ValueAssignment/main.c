#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    int a[SIZE], b[SIZE];
	for(int i = 1; i <= SIZE; i++)
        a[i-1] = i * i;
	for(int i = 0; i <= SIZE-1;i++)
        b[i] = a[i];
	for(int i = 0; i <= SIZE-1; i++)
        printf("%4d\n", b[i]);

    return 0;
}
