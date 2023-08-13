#include <stdio.h>

#define MAX 10

int FindMax(int x[], int y);
int array[MAX];

int main()
{
    for(int count = 0; count < MAX; count++){
        printf("Enter value: ");
        scanf("%d", &array[count]);
    }

    printf("\n\n Max Value= %d\n", FindMax(array, MAX));
    return 0;
}

int FindMax(int x[], int y)
{
    int tmp = -12000;
    for(int count = 0; count < y; count++){
        if (x[count] > tmp)
            tmp = x[count];
    }

    return tmp;
}
