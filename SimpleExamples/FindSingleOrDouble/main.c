#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("Enter number : ");
    scanf("%d", &a);
    printf("\n");

    b=fabs(a/2)*2;
    if(a == b)
        printf("Double");
    else
        printf("Single");

    return 0;
}

