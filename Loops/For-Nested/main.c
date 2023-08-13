#include <stdio.h>

#define COLUMN 6
#define CHARS 10

int main(void)
{
 	for(int col = 0; col < COLUMN; col++){
		for (char ch = 'A'; ch < ('A' + col); ch++){
            printf("%c", ch);
		 	printf("\n");
        }
	}

    return 0;
 }
