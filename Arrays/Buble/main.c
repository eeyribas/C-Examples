#include <stdio.h>
#include <conio.h>

#define SIZE 10

int main()
{
	int a[SIZE] = {23,12,11,4,32,43,34, 1, 10, 33};
	int tmp;

	printf("Original Alignment\n");
	for(int i = 0; i < SIZE; i++)
        printf("%4d", a[i]);

	for(int tur = 1; tur < SIZE; tur++){
        for(int i = 0; i < SIZE - 1; i++){
           if(a[i] > a[i+1]){
				tmp = a[i];
				a[i] = a[i+1];
				a[i+1] = tmp;
			}
        }
    }

    printf("\nBuble\n");
    for(int i = 0; i < SIZE; i++)
        printf("%4d", a[i]);
    printf("\n");

    getch();
    return 0;
}
