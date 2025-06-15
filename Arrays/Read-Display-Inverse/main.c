#include <stdio.h>
#include <conio.h>

void main()
{
    void Read(int*, int);
    void Display(int*, int);
    void Inverse(int*, int*, int);

    int a[5], b[5];
    Read(a, 5);
    Display(a, 5);
    Inverse(a, b, 5);
    Display(b, 5);
}

void Read(int c[], int size)
{
    printf("Enter the list \n");
    for (int i = 0; i < size; i++)
        scanf("%d", &c[i]);
    fflush(stdin);
}

void Display(int d[], int size)
{
    printf("The list is \n");
    for (int i = 0; i < size; i++)
        printf("%d ", d[i]);
    printf("\n");
}

void Inverse(int a[], int inverse_b[], int size)
{
    int k = size - 1;
    for (int i = 0; i < size; i++) {
        inverse_b[i] = a[k];
        k--;
    }
}
