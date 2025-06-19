#include <stdio.h>
#include <conio.h>

#define SIZE 10

int main()
{
	int selection;
	printf("Press 1 for the smoking section\nPress 2 for the non-smoking section\n\n");
	scanf("%d", &selection);

	int seat_selection_1, seat_selection_2;
	int passenger[SIZE] = {1, 1, 1, 0, 0, 0, 1, 1, 0, 0};
	do {
        switch (selection) {
            case 1:
                printf("Select seat number(0 - 5) = ");
                scanf("%d", &seat_selection_1);
                if (passenger[seat_selection_1] == 1) {
                    printf("Choose your seat again!!!");
                    printf("Seat situation on side A\n");
                    for (int i = 0; i < 5; i++)
                        printf("%d\n", passenger[i]);
                    printf("Select seat number(0 - 5) = ");
                    scanf("%d", &seat_selection_1);
                } else {
                    passenger[seat_selection_1] = 1;
                }
                break;
            case 2:
                printf("Select seat number(6 - 11) = ");
                scanf("%d", &seat_selection_2);
                if (passenger[seat_selection_2] == 1) {
                    printf("Choose your seat again!!!");
                    printf("Seat situation on side B\n");
                    for (int i = 5; i < 10; i++)
                        printf("%d\n", passenger[i]);
                    printf("Select seat number(6 - 11) = ");
                    scanf("%d", &seat_selection_2);
                } else {
                    passenger[seat_selection_2] = 1;
                }
                break;
            default:
                printf("You made the wrong choice!!!");
                break;
        }
        printf("Press 1 for the smoking section\nPress 2 for the non-smoking section\n\n");
        scanf("%d", &selection);
    } while(selection < 3);

	getch();
	return 0;
}
