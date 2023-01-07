#include<stdio.h>
#include<conio.h>

#define LENGTH 10

int Method(int [], int);

int main()
{
	int sum, a[LENGTH]={1,2,3,4,5,6,7,8,9,10};

	sum=Method(a, LENGTH);
	printf("Array values (sum) : %d\n", sum);

	getch();
	return 0;
}

int Method(int b[], int a){
	if(a==1)
		return b[0];
	else
		return b[a-1] + Method(b, a-1);
}
