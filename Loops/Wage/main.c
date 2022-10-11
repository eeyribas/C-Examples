#include<stdio.h>
#include<conio.h>

int main()
{
	int working_hour, normal_wage, shift, wage;
	printf("Working hour (Exit = -1) = ");
	scanf("%d", &working_hour);

	while(working_hour != -1)
    {
        printf("Working hour wage =");
        scanf("%d", &normal_wage);
        if(working_hour > 40)
        {
            shift=working_hour-40;
            wage = (working_hour*normal_wage) + (shift * 2 * normal_wage);
        }
        else
        {
            wage= working_hour*normal_wage;
        }
        printf("Wage = %d",wage);
        printf("\n\nWorking hour (Exit = -1) = ");
        scanf("%d", &working_hour);
	}

	printf("Exit!...");
	getch();
	return 0;
}
