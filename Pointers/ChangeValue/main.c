#include<stdio.h>
#include<conio.h>

void f(const int *);

int main(){
	int y;
	f(&y);

	getch();
	return 0;
}

void f(const int *y){
	//*y=100;
}
