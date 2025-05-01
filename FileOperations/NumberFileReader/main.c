#include <stdlib.h>
#include <stdio.h>

int main()
{
    float f_1, f_2, f_3, f_4, f_5;

    FILE *file;
    if ((file = fopen("text.txt", "r")) == NULL) {
        fprintf(stderr, "Dont file open.\n");
        exit(1);
    }

    fscanf(file, "%f %f %f %f %f", &f_1, &f_2, &f_3, &f_4, &f_5);
    printf("Values: %f, %f, %f, %f, and %f\n.", f_1, f_2, f_3, f_4, f_5);
    fclose(file);

    getch();
    return 0;
}
