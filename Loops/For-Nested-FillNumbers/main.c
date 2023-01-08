#include <stdio.h>
#include <conio.h>

int Fill(int);

int main()
{
    int number;
    printf("Enter number: ");
    scanf(" %d", &number);
    printf(" ",Fill(number));

    getch();
    return 0;
}

int Fill(int number)
{
    int i, j, k;
	for(i=1;i<=number;i+=2)
    {
        for(k=0;k<(number-i)/2;k++)
            printf(" ");
            for(j=0;j<i;j++)
                printf("#");
            printf("\n");
    }
}
