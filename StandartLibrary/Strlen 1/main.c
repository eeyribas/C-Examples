#include<conio.h>
#include<stdio.h>
#include<string.h>

#define word "ESENEYRIBAS"

int main(){
	char text[40];
	printf("Name=");
	scanf("%s", &text);
	printf("\n%d name %d.\n", strlen(word), sizeof(word));
	printf("\n%d text %d.\n", strlen(text), sizeof(text));

	getch();
	return 0;
}
