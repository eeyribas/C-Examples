#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n;
    printf("How many numbers will you enter : ");
    scanf("%d",&n);

    int x[100];
    int t = 0, c = 0;
    for (int i = 0; i < n; i++) {
        printf("\n%d. number : ", i + 1);
        scanf("%d", &x[i]);
        int k = fabs(x[i] / 2) * 2;
        printf("fabs(x[i] / 2) * 2 = %d\n", k);
        printf("%d == %d\n", k, x[i]);
        if (k == x[i])
            c = c + 1;
        else
            t = t + 1;
    }
    printf("\n");

    printf("Number of single elements : %d\n", t);
    printf("Number of double elements : %d\n", c);

    getch();
    return 0;
}
