#include<stdio.h>
#include<conio.h>

int main()
{
    int count = 1;
    while(count <= 10){
        printf("%s\n", count % 2 ? "****":"++++++++");
        ++count;
    }

    getch();
    return 0;
}
