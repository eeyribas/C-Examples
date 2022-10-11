#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char s1[15]="BBBBBBBBBBBBBB";
	printf("string1= %s\n", s1);
	printf("memsetten code string1= %s\n", memset(s1, 'b', 7));

	getch();
	return 0;
}
