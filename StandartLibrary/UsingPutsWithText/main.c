#include<stdio.h>
#include<conio.h>

int main()
{
	char c, sentence[80];
	int i=0;

	puts("Enter text = ");
	while((c = getchar()) != '\n')
    {
        sentence[i++] = c;
    }
	sentence[i] = '\0';

	puts("\nText = ");
	puts(sentence);

	getch();
	return 0;
}
