#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int a, b;
    double triK, tri;
    do{
        printf("a Edge = ");
        scanf("%d", &a);
        printf("b Edge = ");
        scanf("%d", &b);
        triK=(a*a) + (b*b);
        tri=sqrt(triK);
        printf("\n\n Edge = %.2f\n\n", tri);
    }while((a!=0) && (b != 0) );

    getch();
    return 0;
}
