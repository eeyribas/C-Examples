#include <stdio.h>

void main()
{
    void Read(int*, int);
    void Display(int*, int);
    void Sort(int*, int);
    void Merge(int*, int*, int*, int);

    int a[5], b[5], c[10];
    printf("Enter the elements of first list: \n");
    Read(a, 5);
    printf("The elements of first list are: \n");
    Display(a, 5);
    printf("Enter the elements of second list: \n");
    Read(b, 5);
    printf("The elements of second list are: \n");
    Display(b, 5);
    Sort(a, 5);
    printf("The sorted list a is: \n");
    Display(a, 5);
    Sort(b, 5);
    printf("The sorted list b is: \n");
    Display(b, 5);
    Merge(a, b, c, 5);
    printf("The elements of merged list are: \n");
    Display(c, 10);
}

void Read(int c[], int size)
{
    for (int i = 0; i < size; i++)
        scanf("%d", &c[i]);
    fflush(stdin);
}

void Display(int d[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", d[i]);
    printf("\n");
}

void Sort(int arr[], int size)
{
 	for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Merge(int a[], int b[], int c[], int size)
{
    int ptr_a = 0, ptr_b = 0, ptr_c = 0;
    while (ptr_a < size && ptr_b < size) {
        if (a[ptr_a] > b[ptr_b]) {
            c[ptr_c] = a[ptr_a];
            ptr_a++;
        } else {
            c[ptr_c] = b[ptr_b];
            ptr_b++;
        }
        ptr_c++;
    }

    while (ptr_a < size) {
        c[ptr_c] = a[ptr_a];
        ptr_a++;
        ptr_c++;
    }

    while (ptr_b < size) {
        c[ptr_c] = b[ptr_b];
        ptr_b++;
        ptr_c++;
    }
}
