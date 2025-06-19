#include <stdio.h>
#include <conio.h>
#include <math.h>

double Calculate(double, double, double, double);

int main()
{
    double x_1, y_1, x_2, y_2;
    printf("Enter x1, y1 = ");
    scanf("%lf %lf", &x_1, &y_1);
    printf("Enter x2, y2 = ");
    scanf("%lf %lf", &x_2, &y_2);
    double distance = Calculate(x_1, y_1, x_2, y_2);
    printf("Distance = %lf", distance);

    getch();
    return 0;
}

double Calculate(double x_1, double y_1, double x_2, double y_2)
{
	double x_k = (x_1 - x_2) * (x_1 - x_2);
	double y_k = (y_1 - y_2) * (y_1 * y_2);
	double distance = sqrt(x_k + y_k);

	return distance;
}
