#include<stdio.h>
#include<conio.h>

#define SIZE 100

int LineerSearch(const int[], int, int);

int main(){
	int a[SIZE], x, search_value, element;
	for(x=0; x<SIZE; x++)
        a[x]=2*x;

	printf("Searh Value = ");
	scanf("%d", &search_value);
	element=LineerSearch(a, search_value, SIZE);

	if(element != -1)
        printf("Find.");
	else
        printf("Not find.");

	getch();
	return 0;
}

int LineerSearch(const int a[], int key, int b){
	int n;
	for(n=0; n<SIZE; ++n)
		if(a[n]==key)
            return n;

	return -1;
}
