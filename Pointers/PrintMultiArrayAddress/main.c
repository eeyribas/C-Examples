#include <stdio.h>
#include <conio.h>

int main()
{
    int array[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
    printf("array = %p, array + 1 = %p\n", array, array + 1);
    printf("array[0] = %p, array[0] + 1 = %p\n", array[0], array[0] + 1);
    printf("*array = %p, *array + 1 = %p\n", *array, *array + 1);
    printf("array[0][0] = %d\n", array[0][0]);
    printf("*array[0] = %d\n", *array[0]);
    printf("**array = %d\n", **array);
    printf("array[2][1] = %d\n", array[2][1]);
    printf("*(*(array + 2) + 1) = %d\n", *(*(array + 2) + 1));

    getch();
    return 0;
}
