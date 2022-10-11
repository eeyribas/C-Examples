#include<stdio.h>
#include <conio.h>

#define SIZE 10

int main(){
	int a[SIZE]={23,12,11,4,32,43,34, 1, 10, 33};
	int i, tur, tut;

	printf("Original Alignment\n");
	for(i=0; i<SIZE; i++)
        printf("%4d", a[i]);

	for(tur=1; tur<SIZE; tur++)
    {
        for(i=0; i<SIZE-1; i++)
        {
           if(a[i]>a[i+1]){
				tut = a[i];
				a[i]=a[i+1];
				a[i+1]=tut;
			}
        }
    }

    printf("\nBuble\n");
    for(i=0; i<SIZE; i++)
        printf("%4d", a[i]);
    printf("\n");

    getch();
    return 0;
}
