#include <stdio.h>
#define SAT 6
#define CHARS 10

int main(void)
{
    int sat;
    char ch;

 	for (sat = 0; sat <SAT;sat++)
	{
		for (ch = 'A'; ch <('A'+sat); ch++)
        {
            printf("%c", ch);
		 	printf("\n");
        }
	}

    return 0;
 }
