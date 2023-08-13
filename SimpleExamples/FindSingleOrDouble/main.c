#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("Enter number : ");
    scanf("%d", &a);
    printf("\n");

    int b = fabs(a / 2) * 2;
    if(a == b)
        printf("Double");
    else
        printf("Single");

    return 0;
}

