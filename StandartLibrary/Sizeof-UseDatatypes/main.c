#include <stdio.h>
#include <conio.h>

int main()
{
	char c;
	short s;
	int i;
	long l;
	float f;
	double d;
	long double ld;
	int array[20], *ptr = array;

	printf("sizeof c=%d"
		"\tsizeof(char)=%d"
		"\nsizeof(s)=%d"
		"\tsizeof(short)=%d"
		"\nsizeof i=%d"
		"\tsizeof(int)=%d"
		"\nsizeof l=%d"
		"\tsizeof (long)=%d"
		"\nsizeof f=%d"
		"\tsizeof (float)=%d"
		"\nsizeof d=%d"
		"\tsizeof(double)=%d"
		"\nsizeof ld=%d"
		"\tsizeof(long double)=%d"
		"\nsizeof array=%d"
		"\nsizeof ptr=%d\n", sizeof c,
		sizeof(char), sizeof s, sizeof(short),
		sizeof i, sizeof(int), sizeof l,
		sizeof(long), sizeof f, sizeof(float),
		sizeof d, sizeof(double), sizeof ld,
		sizeof(long double), sizeof array, sizeof ptr);

    getch();
	return 0;
}
