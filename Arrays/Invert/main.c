#include<stdio.h>

void Invert(int *array, int size)
{
    int temp = 0;
    for (int i = 0; i < size / 2; i++) {
        temp = *(array + i);
        *(array + i) = *(array + size - 1 - i);
        *(array + size - 1 - i) = temp;
    }
}

int main()
{
    int array[5] = {'a', 'b', 'c', 'd', 'e'};

    int size = 5;
    for (int i = 0; i < size; i++)
        printf("%c", array[i]);

    Invert(array, size);
    printf("\n");
    for (int i = 0; i < size; i++)
        printf("%c", array[i]);

    getch();
    return 0;
}
