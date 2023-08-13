#include <stdio.h>

int main()
{
    int a = 5, b = 6, c = 2;

    printf("a < b     : %d\n", a < b);
    printf("a > c     : %d\n", a > c);
    printf("a <=b     : %d\n", a <= b);
    printf("b!=(a+c)  : %d\n", b != (a + c));
    printf("c==c      : %d\n", c == c);
    printf("b<10      : %d\n", b < 10);
    printf("a>=4      : %d\n", a >= 4);
    printf("b<=(a+c)  : %d\n", b <= (a + c));
    printf("a == b    : %d\n", a == b);
    printf("c > b     : %d\n", c > b);
    printf("c!=2      : %d\n", c != 2);
    printf("(a + b)<c : %d\n", (a + b) < c);
    printf("b==(a+2)  : %d\n", b == (a + 2));
    printf("a >= b    : %d\n", a >= b);
    printf("b<c       : %d\n", b < c);
    printf("a !=(b-1) : %d\n", a != (b - 1));

    return 0;
}
