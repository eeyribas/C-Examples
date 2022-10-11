#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char x[]="Happy birthday!.";
	char y[25], z[15];

	printf("%s%s\n%s%s\n","x string:",x,
		"y string:",y);
	strncpy(z, x, 11);
	z[11]='\0';
	printf("z string: %s\n", z);

	getch();
	return 0;
}
