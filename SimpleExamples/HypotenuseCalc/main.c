#include<stdio.h>
#include<conio.h>
#include<math.h>

int Hypotenuse(int, int);

int main()
{
	int a, b;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("Edge = %d\n\n", Hypotenuse(a, b));

	getch();
	return 0;

}


int Hypotenuse(int a, int b)
{
	double steep, steep_edge;
	steep = (a*a) + (b*b);
	steep_edge = sqrt(steep);

	return steep_edge;
}
