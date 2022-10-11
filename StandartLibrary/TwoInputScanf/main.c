#include<stdio.h>
#include<conio.h>

int main()
{
    int x, y, i, j;

    printf("Enter numbers = \n");
    scanf("%d %d", &x, &y);

    for(i=1; i<=y; i++)
    {
        for(j=1; j<=x; j++)
        {
            printf("@");
        }
        printf("\n");
    }

    getch();
    return 0;
}
