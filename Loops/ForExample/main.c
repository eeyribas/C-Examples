#include<stdio.h>
#include<conio.h>

int main(){
int sum=0, value;

for(value=2; value<=100; value+=2){
	sum += value;
}

printf("%d", sum);

getch();
return 0;
}
