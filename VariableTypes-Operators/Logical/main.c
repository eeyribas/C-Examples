#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=3, b=4, i=10, j=2;
	printf("%d\n", a < b && i < j);
	printf("%d\n", a > b && i > j);
	printf("%d\n", a < b || i < j);
	printf("%d\n", !5 > 7 || 3 < 2);

    return 0;
}
