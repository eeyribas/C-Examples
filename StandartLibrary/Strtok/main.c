#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char string[]="This is a sentence of 6 words.";
	char *atom_ptr;

	printf("%s\n%s\n\n%s\n", "will be separated words sting: ",
		string, "Words:");

	atom_ptr=strtok(string, " ");

	while(atom_ptr != NULL){
		printf("%s\n", atom_ptr);
		atom_ptr=strtok(NULL, " ");
	}

	getch();
	return 0;
}
