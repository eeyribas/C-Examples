#include<stdio.h>
#include<conio.h>

void UseArray(const int []);

int main(){
	int a[]={10, 20, 30};

	UseArray(a);
	printf("\n%d %d %d", a[0], a[1], a[2]);

	getch();
	return 0;
}

void UseArray(const int a[]){
	a[0] /= 2;
	a[1] /= 2;
	a[2] /= 2;
}
