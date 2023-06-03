#include <stdio.h>

int main()
{
    int a = 7;
    unsigned int ua = 55000;

    short b = 30000;
    unsigned short ub = 60000;

    long c = 398162092;
    unsigned long uc = 4047483649;

    char d = 125;
    unsigned char ud = 252;

    double e = 97223.787844;
    float ue = 223.52;

    printf("a: %d \n", a);
    printf("ua: %u \n", ua);

    printf("b: %d \n", b);
    printf("ub: %u \n", ub);

    printf("c: %ld \n", c);
    printf("uc: %u \n", uc);

    printf("d: %d \n", d);
    printf("ud: %d \n", ud);

    printf("e: %f \n", e);
    printf("ue: %f \n", ue);

    return 0;
}
