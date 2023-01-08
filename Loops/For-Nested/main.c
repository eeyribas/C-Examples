#include <stdio.h>

#define COLUMN 6
#define CHARS 10

int main(void)
{
    int col;
    char ch;

 	for (col = 0; col <COLUMN; col++){
		for (ch = 'A'; ch <('A'+col); ch++){
            printf("%c", ch);
		 	printf("\n");
        }
	}

    return 0;
 }
