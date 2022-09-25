#include<stdio.h>
#include<conio.h>

#define length 10

int method(int [], int);

int main(){
	int sum, a[length]={1,2,3,4,5,6,7,8,9,10};

	sum=method(a, length);
	printf("Array values (sum) : %d\n", sum);

	getch();
	return 0;
}

int method(int b[], int a){
	if(a==1)
		return b[0];
	else
		return b[a-1]+method(b, a-1);
}
