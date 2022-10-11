#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char x[]="Welcome World Welcome";

	printf("%s%s\n", "first : ", x);
	printf("%s%s\n", "mommove code : ",memmove(x, &x[5], 10));

	getch();
	return 0;
}
