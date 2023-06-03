#include<stdio.h>

int main()
{
    float a,b,c,d;
    a = 123.456;
    b = 123.456e+0;
    c = 1.23456e+2;
    d = 1234.56E-1;

    printf("a  = %f\n", a);
    printf("b  = %e\n", b);
    printf("c  = %e\n", c);
    printf("d  = %e\n", d);
    printf("d  = %10.5e\n", d);

    return 0;
}
