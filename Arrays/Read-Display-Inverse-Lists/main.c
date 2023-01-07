#include<stdio.h>
#include<conio.h>

void main()
{
    void Read(int *,int);
    void Display(int *,int);
    void Inverse(int *,int *,int);
    int a[5],b[5];
    Read(a,5);
    Display(a,5);
    Inverse(a,b,5);
    Display(b,5);
}

void Read(int c[],int i)
{
    int j;
    printf("Enter the list \n");
    for(j=0;j<i;j++)
        scanf("%d",&c[j]);
    fflush(stdin);
}

void Display(int d[],int i)
{
    int j;
    printf("The list is \n");
    for(j=0;j<i;j++)
        printf("%d ",d[j]);
    printf("\n");
}

void Inverse(int a[],int inverse_b[],int j)
{
    int i,k;
    k=j-1;
    for(i=0;i<j;i++){
        inverse_b[i]=a[k];
        k--;
    }
}
