#include <stdio.h>
#include <conio.h>
#include <math.h>

double Calc(double, double, double, double);

int main()
{
    double a, b, c, d, disc;
    printf("Enter x1, y1 =");
    scanf("%lf %lf", &a, &b);
    printf("Enter x2, y2 =");
    scanf("%lf %lf", &c, &d);
    disc=Calc(a, b, c, d);
    printf("Distance=%lf", disc);

    getch();
    return 0;
}

double Calc(double a, double b, double c, double d)
{
	double xk, yk, dis, dist;
	xk = (a - c) * (a - c);
	yk = (b - d) * (b * d);
	dis = xk + yk;
	dist = sqrt(dis);

	return dist;
}
