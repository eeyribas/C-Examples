#include <stdio.h>
#include <conio.h>

int FindRem(int, int);
int FindSection(int, int);
int Interval(int);

int main()
{
	int a, b, c, d, e, choose;
	printf("\n\n1-Finding the interval of a number\n");
	printf("2-Finding the remainder of a number\n");
	printf("3-Write a number in the entered range(1-32767)\n");
	printf("Which option would you prefer?=");
	scanf("%d", &choose);

	while(choose != 0){
        switch (choose){
            case 1:
                printf("\nNumber = ");
                scanf("%d", &a);
                printf("Section = ");
                scanf("%d", &b);
                printf("%d", FindSection(a, b));
                break;
            case 2:
                printf("\nNumber = ");
                scanf("%d", &c);
                printf("Rem = ");
                scanf("%d", &d);
                printf("%d", FindRem(c, d));
                break;
            case 3:
                printf("\nNumber =");
                scanf("%d", &e);
                printf("", Interval(e));
                break;
            default:
                printf("1, 2, 3) enter number. Error!!!");
                break;
        }
        printf("\n\n1-Finding the interval of a number\n");
        printf("2-Finding the remainder of a number\n");
        printf("3-Write a number in the entered range(1-32767)\n");
        printf("Which option would you prefer?=");
        scanf("%d", &choose);
	}

	getch();
	return 0;
}

int FindSection(int a, int b)
{
	int sec = a / b;

	return sec;
}

int FindRem(int c, int d)
{
	int rem = c % d;

	return rem;
}

int Interval(int number)
{
    int c, d, e;
    if(number < 32767){
        int b = (number % 10000) - c;
        c = (number % 1000) - d;
        d = (number % 100) - e;
        e = number % 10;
        printf("  %d  %d  %d  %d",  b, c, d, e);
	} else {
	    printf("Enter within the specified range!!!");
	}
}
