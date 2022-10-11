#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    int a, b, c, d, e;

    printf("Number = ");
    scanf("%d", &num);

    a = num / 10000;
    b= (num-(a*10000)) / 1000;
    c = (num- (a*10000+b*1000))/100;
    d= (num-(a*10000+b*1000+c*100))/10;
    e=(num-(a*10000+b*1000+c*100+d*10))/1;

    printf("Output---> %d  %d  %d  %d  %d",a,b,c,d,e);

    getch();
    return 0;
}
