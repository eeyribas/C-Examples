#include<stdio.h>
#include<conio.h>

int main()
{
    int a=0;
    printf("Number    Square    Cube\n");
    for(a=0; a<11; a++)
        printf("%d          %d          %d\n", a, a*a, a*a*a);

    getch();
    return 0;
}
