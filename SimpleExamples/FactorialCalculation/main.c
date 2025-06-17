#include <stdio.h>

long Factorial(int n);
long Recursive(int n);

int main()
{
    int number;
    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 0-12 (q to quit):\n");
    while (scanf("%d", &number) == 1) {
        if (number < 0){
            printf("No negative numbers, please.\n");
        } else if (number > 12) {
            printf("Keep input under 13.\n");
        } else {
            printf("loop: %d factorial = %ld\n", number, Factorial(number));
            printf("recursion: %d factorial = %ld\n", number, Recursive(number));
        }
        printf("Enter a value in the range 0-12 (q to quit):\n");
    }
    printf("Bye.\n");

    return 0;
}

long Factorial(int n)
{
    long result;
    for (result = 1; n > 1; n--)
        result *= n;

    return result;
}

long Recursive(int n)
{
    long result;
    if (n > 0)
        result = n * Recursive(n - 1);
    else
        result = 1;

    return result;
}
