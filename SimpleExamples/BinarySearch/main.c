#include<stdio.h>
#include<conio.h>

#define size 15

int BinarySearch(const int[], int, int, int);
void Header(void);
void Row(const int[], int, int, int);

int main(){
	int a[size], i, key, result;

	for(i=0; i<size; i++) a[i]=2*i;

	printf("Search value =");
	scanf("%d", &key);

	Header();
	result=BinarySearch(a, key, 0, size-1);

	if(result != -1) printf("Find.");
	else printf("Not find!..");

	getch();
	return 0;
}

int BinarySearch(const int a[], int search, int down, int up){
	int middle;
	while(down<=up){
		middle=(down+up)/2;

		Row(a, down, middle, up);

		if(search == a[middle]) return middle;
		else if(search < a[middle]) up=middle-1;
		else down=middle+1;
	}
	return -1;
}

void Header(void){
	int i;
	for(i=0; i<size; i++) printf("%3d", i);
	printf("\n");
	for(i=1; i<=4*size; i++) printf("-");

	printf("\n");
}

void Row(const int a[], int down, int middle, int up){

	int i;
	for(i=0; i<=size; i++)
		if(i<down || i>up) printf(" ");
		else if(i==middle) printf("%3d*", a[i]);
		else printf("%3d", i);

		printf("\n");
}
