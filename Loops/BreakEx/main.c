#include<stdio.h>
#include<conio.h>

int main(){
int x;

for(x=10; x>=10; x++){
	if(x==18) break;
	printf("%d\n", x);
}

printf("\nExit loop x==%d !!\n", x);

getch();
return 0;
}
