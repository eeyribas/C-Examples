#include<stdio.h>

int main()
{
    int i, i1, i2, i3, i4, i5;
    double r, r1, r2, r3;

    i = 25;    /* 25, int type */
    r = 17.2;  /* 17.2, double type */

    i1 = 25;    /* int           */
    i2 = 25U;   /* unsigned int  */
    i3 = 25L;   /* long int      */
    i4 = 25UL;  /* unsigned long */

    r1 = 17.2;  /* double        */
    r2 = 17.2L; /* long double   */
    r3 = 17.2F; /* float         */

    printf("i    = %d   \n", i);
    printf("i1   = %d   \n", i1);
    printf("i2   = %u  \n", i2);
    printf("i3   = %ld  \n", i3);
    printf("i4   = %lu  \n", i4);

    return 0;
}
