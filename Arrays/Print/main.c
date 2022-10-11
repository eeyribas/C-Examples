#include<stdio.h>
#include<conio.h>

void Print(const int [][3]);

int main(){
	int array1[2][3]={{1,2,3},{4,5,6}};
	int array2[2][3]={1,2,3,4,5};
	int array3[2][3]={{1,2},{3}};

	printf("Array1\n");
	Print(array1);

	printf("Array2\n");
	Print(array2);

	printf("Array3\n");
	Print(array3);

	getch();
	return 0;
}

void Print(const int a[][3]){
	int i, j;
	for(i=0; i<=1; i++){
		for(j=1; j<=2; j++)
        {
           printf("%d ", a[i][j]);
        }
        printf("\n");
	}
}
