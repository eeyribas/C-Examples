#include<stdio.h>

void main()
{
    void Read(int *,int);
    void Display(int *,int);
    void Sort(int *,int);
    void Merge(int *,int *,int *,int);
    int a[5], b[5], c[10];
    printf("Enter the elements of first list \n");
    Read(a, 5);
    printf("The elements of first list are \n");
    Display(a, 5);
    printf("Enter the elements of second list \n");
    Read(b, 5);
    printf("The elements of second list are \n");
    Display(b, 5);
    Sort(a, 5);
    printf("The sorted list a is:\n");
    Display(a, 5);
    Sort(b, 5);
    printf("The sorted list b is:\n");
    Display(b, 5);
    Merge(a, b, c, 5);
    printf("The elements of merged list are \n");
    Display(c, 10);
}

void Read(int c[], int i)
{
    int j;
    for(j=0;j<i;j++)
        scanf("%d",&c[j]);
    fflush(stdin);
}

void Display(int d[], int i)
{
    int j;
    for(j=0;j<i;j++)
        printf("%d ",d[j]);
    printf("\n");
}

void Sort(int arr[], int k)
{
    int temp;
    int i, j;
 	for(i=0;i<k;i++){
        for(j=0;j<k-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void Merge(int a[], int b[], int c[], int k)
{
    int ptra=0,ptrb=0,ptrc=0;
    while(ptra<k && ptrb<k){
        if(a[ptra] > b[ptrb]){
            c[ptrc]=a[ptra];
            ptra++;
        }
        else{
            c[ptrc]=b[ptrb];
            ptrb++;
        }
        ptrc++;
    }
    while(ptra<k){
        c[ptrc]=a[ptra];
        ptra++;ptrc++;
    }
    while(ptrb<k){
        c[ptrc]=b[ptrb];
        ptrb++;  ptrc++;
    }
}
