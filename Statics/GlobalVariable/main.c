#include <stdio.h>
#include <conio.h>

void a(void);
void b(void);
void c(void);

int x = 1;

int main()
{
    int x = 5;
    printf("X1 = %d \n", x);
    {
        int x = 7;
        printf("X2 = %d \n", x);
    }
    printf("X3 = %d \n", x);

    a();
    b();
    c();
    a();
    b();
    c();
    printf("X4 = %d \n", x);

    getch();
    return 0;
}

void a(void)
{
    int x = 25;
    printf("\nXa = %d \n", x);
    ++x;
    printf("Xa %d \n", x);
}

void b(void)
{
    static int x = 50;
    printf("\nXb %d \n", x);
    ++x;
    printf("Xb %d \n", x);
}

void c(void)
{
    printf("\nXc = %d \n", x);
    x *= 10;
    printf("Xc = %d \n", x);
}
