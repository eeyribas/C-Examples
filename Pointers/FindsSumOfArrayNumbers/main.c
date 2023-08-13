#include <stdio.h>

#define SIZE 10

int Sum(int* start, int* end);

int main(void)
{
    int values[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    int res = Sum(values, values + SIZE);
    printf("Sum : %d\n", res);

    return 0;
}

int Sum(int* start, int* end)
{
    int total = 0;
    while(start < end){
        total += *start;
        start++;
    }

    return total;
}
