#include<stdio.h>
#include<conio.h>

void Gcd(int, int);

int main()
{
    int a,b;
    printf( "First number : " ) ;
    scanf( "%d", &a ) ;
    printf("Second number : ");
    scanf("%d", &b);

    Gcd(a, b);

    getch();
    return 0 ;
}

void Gcd(int a, int b)
{
	int i;
    for( i = a + b ; i > 0 ; i --)
    {
        if ( a%i == 0 && b%i == 0 )
        {
            printf ( "Gcd : %d\n", i ) ;
            break;
        }
    }
}
