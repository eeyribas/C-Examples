#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int Dice();

int main()
{
	int game_state, point;

	srand(time(NULL));
	int sum = Dice();

	switch (sum) {
        case 7:
        case 11:
            game_state = 1;
            break;
        case 2:
        case 3:
        case 12:
            game_state = 2;
            break;
        default:
            game_state = 0;
            point = sum;
            printf("Dice : %d\n", point);
            break;
	}

	while (game_state == 0) {
		sum = Dice();
		if (sum == point)
            game_state = 1;
		else if (sum == 7)
            game_state = 2;
	}

	if (game_state == 1)
        printf("Gamer win.\n");
	else
        printf("Gamer loses\n");

	getch();
	return 0;
}

int Dice()
{
	int dice_1 = 1 + (rand() % 6);
	int dice_2 = 1 + (rand() % 6);
	int sum_dice = dice_1 + dice_2;
	printf("Gamer %d + %d = %d \n", dice_1, dice_2, sum_dice);

	return sum_dice;
}
