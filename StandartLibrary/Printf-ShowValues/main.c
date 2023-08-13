#include <stdio.h>

int main()
{
    char *c = "ABCDEF";
    printf("%10s\n ", c);
    printf("%10.3s \n ", c);

    float x = 128.5 ;
    printf("%7.2f\n", x) ;
    x = 85.47 ;
    printf("%6.3f\n", x) ;
    printf("%6.1f\n", x) ;

    return 0;
}
