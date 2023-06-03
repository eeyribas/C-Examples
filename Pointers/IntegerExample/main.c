#include<stdio.h>

int main()
{
    int r = 50;
	int *p;
	int **k;
	int ***m;
	printf( "r: %d\n", r );

	p = &r;
	k = &p;
	m = &k;
	***m = 100;
	printf( "r: %d\n", r );

	return 0;
}
