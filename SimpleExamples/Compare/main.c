#include<stdio.h>
#include<conio.h>

int main()
{
    int s1, s2;
    printf("Enter numbers\n");
    printf("Numbers compare\n");
    scanf("%d %d", &s1, &s2);

    if(s1 == s2) printf("%d = %d\n", s1, s2);
    if(s1 != s2) printf("%d != %d\n", s1, s2);
    if(s1 > s2) printf("%d > %d\n", s1, s2);
    if(s1 < s2) printf("%d < %d\n", s1, s2);
    if(s1 >= s2) printf("%d >= %d\n", s1, s2);
    if(s1 <= s2) printf("%d <= %d\n", s1, s2);

    getch();
    return 0;
}
