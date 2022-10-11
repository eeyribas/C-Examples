#include<stdio.h>
#include<conio.h>

int main(){
	char string1[20], string2[]="text write read";
	int i;
	printf("String = ");
	scanf("%s", &string1);

	printf("string1:%s\nstring2:%s\n""space string:\n", string1, string2);

	for(i=0; string1[i]!='\0'; i++)
        printf("%c", string1[i]);
	printf("\n");

	getch();
	return 0;
}
