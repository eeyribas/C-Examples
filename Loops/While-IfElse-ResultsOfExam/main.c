#include<stdio.h>
#include<conio.h>

int main()
{
    int pass=0, fail=0, student=1, result;

    while(student <= 10){
        printf("Enter Pass=1, Fail=2 :\n");
        scanf("%d", &result);
        if(result == 1)
            pass++;
        else
            fail++;
        student++;
    }
    printf("Pass exam=%d\n", pass);
    printf("Fail exam=%d\n", fail);

    if(pass >= 8)
        printf("Success!!");

    getch();
    return 0;
}
