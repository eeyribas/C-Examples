#include <stdlib.h>
#include <stdio.h>

int main()
{
    float f1, f2, f3, f4, f5;
    FILE *fp;

    if((fp = fopen("text.txt", "r")) == NULL)
    {
        fprintf(stderr, "Dont file open.\n");
        exit(1);
    }

    fscanf(fp, "%f %f %f %f %f", &f1, &f2, &f3, &f4, &f5);
    printf("Values: %f, %f, %f, %f, and %f\n.", f1, f2, f3, f4, f5);
    fclose(fp);

    return(0);
}
