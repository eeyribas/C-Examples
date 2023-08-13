#include <stdlib.h>
#include <stdio.h>

#define SIZE 20

int main()
{
    int array_1[SIZE], array_2[SIZE];
    FILE *fp;

    for(int count = 0; count < SIZE; count++)
        array_1[count] = 2 * count;

    if((fp = fopen("direct.txt", "wb")) == NULL){
        fprintf(stderr, "Error-1.");
        exit(1);
    }
    if(fwrite(array_1, sizeof(int), SIZE, fp) != SIZE){
        fprintf(stderr, "Error-2.");
        exit(1);
    }
    fclose(fp);

    if((fp = fopen("direct.txt", "rb")) == NULL){
        fprintf(stderr, "Error-3.");
        exit(1);
    }
    if(fread(array_2, sizeof(int), SIZE, fp) != SIZE){
        fprintf(stderr, "Error-4.");
        exit(1);
    }
    fclose(fp);

    for(int count = 0; count < SIZE; count++)
        printf("%d\t%d\n", array_1[count], array_2[count]);

    return(0);
}
