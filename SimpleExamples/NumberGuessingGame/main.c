#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
	srand(time(NULL));

	int number = rand() %100 +1;
	int enter;

	for (int i = 1; i < 11; i++) {
		printf("\n%d. Guess \n", i);

        do {
            printf("Enter a Number Between 1 and 100 = ");
			scanf("%d", &enter);
        } while(!(enter < 100 && enter > 0));

		if (number == enter) {
			printf("\nCongratulations, correct guess!");
			break;
		} else if (number > enter) {
			printf("\nThe hidden number is smaller!");
		} else {
			printf("\nThe hidden number is larger!");
		}
	}

	if (number != enter)
        printf("Out of attempts! You lost. The hidden number = %d ", number);

	getch();
	return 0;
}
