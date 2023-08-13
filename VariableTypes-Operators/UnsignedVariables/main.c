#include <stdio.h>

int main()
{
    int a = 7;
    unsigned int u_a = 55000;

    short b = 30000;
    unsigned short u_b = 60000;

    long c = 398162092;
    unsigned long u_c = 4047483649;

    char d = 125;
    unsigned char u_d = 252;

    double e = 97223.787844;
    float u_e = 223.52;

    printf("a: %d \n", a);
    printf("ua: %u \n", u_a);

    printf("b: %d \n", b);
    printf("ub: %u \n", u_b);

    printf("c: %ld \n", c);
    printf("uc: %u \n", u_c);

    printf("d: %d \n", d);
    printf("ud: %d \n", u_d);

    printf("e: %f \n", e);
    printf("ue: %f \n", u_e);

    return 0;
}
