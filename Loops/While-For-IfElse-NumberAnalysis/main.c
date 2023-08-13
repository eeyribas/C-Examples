#include <stdio.h>
#include <conio.h>

int main()
{
    unsigned long num;
    int is_prime;
    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit.\n");

    while(scanf("%lu", &num) == 1){
        for(unsigned long div = 2, is_prime = 1; (div * div) <= num; div++){
            if(num % div == 0){
                if((div * div) != num){
                    printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
                } else {
                    printf("%lu is divisible by %lu.\n", num, div);
                    is_prime = 0;
                }
            }
        }

        if(is_prime)
            printf("%lu is prime.\n", num);
        printf("Please enter another integer for analysis; ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");

    getch();
    return 0;
}
