#include <stdio.h>
#include <conio.h>
#include <math.h>

double Calculate(double, double, double, double);

int main()
{
    double x1, y1, x2, y2;
    printf("Enter x1, y1 = ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2, y2 = ");
    scanf("%lf %lf", &x2, &y2);
    double distance = Calculate(x1, y1, x2, y2);
    printf("Distance = %lf", distance);

    getch();
    return 0;
}

double Calculate(double x1, double y1, double x2, double y2)
{
	double xk = (x1 - x2) * (x1 - x2);
	double yk = (y1 - y2) * (y1 * y2);
	double distance = sqrt(xk + yk);

	return distance;
}
