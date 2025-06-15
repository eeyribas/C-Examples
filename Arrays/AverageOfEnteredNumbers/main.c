#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numbers[5], sum = 0.0;
	for (int i = 0; i < 5; i++) {
        printf("%d. number : ", i + 1);
        scanf("%f", &numbers[i]);
		sum += numbers[i];
	}

	double average = sum / 5;
	printf("Average = %2.0f\n", average);

    return 0;
}
