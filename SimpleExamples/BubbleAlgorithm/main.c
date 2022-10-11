#include<stdio.h>
#include<conio.h>

#define SIZE 10

void Bubble(int[], const int, int(*)(int, int));

int Increase(int, int);
int Decrease(int, int);

int main(){
	int select, count, a[SIZE]={1, 23, 34, 2,3, 12,11, 6, 38, 56};

	printf("Enter '1' increase.\n"
		"Enter '2' decrease.\n");
	scanf("%d", &select);

	printf("\nDatas\n");
	for(count=0; count<SIZE; count++)
		printf("%5d", a[count]);

	if(select==1){
		Bubble(a, SIZE, Decrease);
		printf("\nDecrease");
	}
	else{
		Bubble(a, SIZE, Increase);
		printf("\nIncrease");
	}

	for(count=0; count<SIZE; count++)
		printf("%5d", a[count]);

	printf("\n");
	getch();
	return 0;
}

void Bubble(int a[], const int length, int(*compare)(int, int)){
	int tour, count;

	void ChangeLocation(int*, int*);

	for(tour=1; tour<length; tour++)
    {
        for(count=0; count<length; count++)
        {
            if((*compare)(a[count], a[count+1]))
            {
                ChangeLocation(&a[count], &a[count+1]);
            }
        }
    }
}


void ChangeLocation(int *a, int *b){
	int tmp;

	tmp=*a;
	*a=*b;
	*b=tmp;
}

int Increase(int a, int b){
	return b<a;
}

int Decrease(int a, int b){
	return a<b;
}
