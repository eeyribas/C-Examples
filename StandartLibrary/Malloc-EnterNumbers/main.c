#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int max;
    int number;
    int i = 0;

    puts("Max number?");
    scanf("%d", &max);
    double *ptd = (double *)malloc(max * sizeof (double));
    if(ptd == NULL){
        puts("Full memory");
        exit(EXIT_FAILURE);
    }

    puts("Enter numbers (exit = q):");
    while(i < max && scanf("%lf", &ptd[i]) == 1)
        ++i;

    printf("Numbers %d :\n", number = i);
    for(i = 0; i < number; i++){
        printf("%7.2f ", ptd[i]);
        if(i % 7 == 6)
            putchar('\n');
    }
    free(ptd);

    return 0;
}
