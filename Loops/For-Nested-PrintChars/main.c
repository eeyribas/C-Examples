#include <conio.h>
#include <stdio.h>

#define ROW 8
#define CHARS 20

int main()
{
	for (int i = 0; i < ROW; i++) {
		for (char ch = 'A'; ch < ('A' + CHARS); ch++)
            printf("%c", ch);
		printf("\n\n");
	}

	getch();
	return 0;
}
