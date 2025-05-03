#include <stdio.h>
#include <conio.h>

int main()
{
	int manager, shift, commission, part, selection;
	int manager_salary = 0, shift_salary = 0, commission_salary = 0, part_salary = 0;

	do {
        printf("Pay attention to the following order!\n");
        printf("1 - Calculate manager salary\n");
        printf("2 - Calculate shift worker salary\n");
        printf("3 - Calculate commission worker salary\n");
        printf("4 - Calculate parcel worker salary\n");

        printf("Enter the type of worker whose salary you want to calculate (Exit - 0) = ");
        scanf("%d", &selection);
        switch (selection) {
            case 1:
                printf("How many weeks has it worked = ");
                scanf("%d", &manager);
                manager_salary = 500 * manager;
                printf("Manager salary = %d\n\n", manager_salary);
                break;
            case 2:
                printf("How many hours worked = ");
                scanf("%d", &shift);
                if (shift_salary >= 40)
                    shift_salary = 1000 + ((shift - 40) * 2);
                else
                    shift_salary = 1000;
                printf("Manager salary = %d\n\n", shift_salary);
                break;
            case 3:
                printf("How many items did she sell? = ");
                scanf("%d", &commission);
                commission_salary = 500 + (commission * 2);
                printf("Manager salary = %d\n\n", commission_salary);
                break;
            case 4:
                printf("How many pieces has it produced? = ");
                scanf("%d", &part);
                part_salary = 50 * part;
                printf("Manager salary = %d\n\n", part_salary);
                break;
            default:
                printf("\nChoose between 1-4 to calculate salary.!!");
                break;
        }
    } while(selection != 0);

	getch();
	return 0;
}
