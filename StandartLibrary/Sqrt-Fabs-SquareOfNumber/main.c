#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    printf("\n");
    float b = sqrt(a);
    int c = fabs(b);
    int d = c * c;
    if(a == d)
        printf("Square");
    else
        printf("Not square");

    return 0;
}

