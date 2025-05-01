#include <stdlib.h>
#include <stdio.h>

#define SIZE 20

int main()
{
    int array_1[SIZE], array_2[SIZE];
    FILE *file;

    for (int i = 0; i < SIZE; i++)
        array_1[i] = 2 * i;

    if ((file = fopen("text.txt", "wb")) == NULL) {
        fprintf(stderr, "Error-1.");
        exit(1);
    }

    if (fwrite(array_1, sizeof(int), SIZE, file) != SIZE) {
        fprintf(stderr, "Error-2.");
        exit(1);
    }
    fclose(file);

    if ((file = fopen("text.txt", "rb")) == NULL) {
        fprintf(stderr, "Error-3.");
        exit(1);
    }

    if (fread(array_2, sizeof(int), SIZE, file) != SIZE) {
        fprintf(stderr, "Error-4.");
        exit(1);
    }
    fclose(file);

    for (int i = 0; i < SIZE; i++)
        printf("%d\t%d\n", array_1[i], array_2[i]);

    return(0);
}
