#include <stdio.h>

#define MAX 10

int FindMax(int x[], int y);

int main()
{
    int array[MAX];

    for (int i = 0; i < MAX; i++) {
        printf("Enter value: ");
        scanf("%d", &array[i]);
    }
    printf("\n\n Max Value = %d\n", FindMax(array, MAX));

    getch();
    return 0;
}

int FindMax(int array[], int size)
{
    int tmp = -12000;
    for (int i = 0; i < size; i++) {
        if (array[i] > tmp)
            tmp = array[i];
    }

    return tmp;
}
