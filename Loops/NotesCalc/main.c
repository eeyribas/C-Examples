#include<stdio.h>
#include<conio.h>

int main()
{
    int sum = 0, note, count = 0;
    float average;

    printf("Note (Exit = -1)=\n ");
    scanf("%d", &note);

    while(note!=-1)
    {
        sum=sum+note;
        count++;
        printf("Note (Exit = -1)=\n");
        scanf("%d", &note);
    }

    if(count != 0)
    {
        average=(float) sum / count;
        printf("Average =%.2f", average);
    }
    else
    {
        printf("Not find number...");
    }

    getch();
    return 0;
}
