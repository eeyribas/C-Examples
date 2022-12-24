#include <stdio.h>

double Square(double x);
double (*p)(double x);

int main()
{
    p = Square;
    printf("%f %f\n", Square(6.6), p(6.6));

    return(0);
}

double Square(double x)
{
    return x * x;
}
