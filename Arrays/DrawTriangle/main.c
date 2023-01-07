#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    char array[100][100];
    int i,j, sat;
    printf("Row Count = ");
    scanf("%d",&sat);

    for(j=0;j<50;j++){
        for(i=0;i<50;i++  ){
            array[j][i]=' ';
        }
    }

    for(i=3,j=sat-1;i<sat;i++,j--){
        array[1][i]='*';
        array[1][2*sat-2-i]='*';
        array[i-2][i]='*';
        array[i-2][2*sat-2-i]='*';
    }

    for(i=0,j=sat-1;i<sat;i++,j--){
        array[0][i]='-';
        array[0][2*sat-2-i]='-';
        array[i][i]='\\';
        array[i][2*sat-2-i]='/';
    }

    array[0][0]='*';
    array[0][2*sat-2]='*';
    array[sat-1][sat-1]='*';
    for(i=0;i<sat;i++){
        for(j=0;j<(2*sat-1);j++){
            printf("%c",array[i][j]);
        }
        printf("\n");
    }

	getch();
    return 0;
}
