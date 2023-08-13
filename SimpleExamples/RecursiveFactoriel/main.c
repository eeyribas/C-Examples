#include <stdio.h>
#include <conio.h>

long Factoriel(long);

int main()
{
	for(int i = 1; i <= 15; i++)
        printf("%2d!=%ld\n", i, Factoriel(i));

	getch();
	return 0;
}

long Factoriel(long number)
{
	if(number <= 1)
        return 1;
	else
        return (number * Factoriel(number - 1));
}
