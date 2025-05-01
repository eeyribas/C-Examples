#include <stdio.h>
#include <conio.h>

#define SIZE 99

void Middle(const int[]);
void Median(int[]);
void Mod(int[], const int[]);
void Bubble(int[]);
void Print(const int[]);

int main()
{
	int freq[10] = {0};
	int answer[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9,
        1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 2, 3, 1,
        4, 5, 6, 7, 8, 9, 2, 3, 4, 5, 6, 7, 8, 6,
        4, 5, 3, 2, 1, 2, 3, 4, 5, 6, 7, 4, 7, 4,
        4, 3, 33, 3, 3, 3, 1, 2, 1, 2, 3, 4, 5, 6,
        5, 4, 3, 3, 1, 8, 9, 3, 2, 3, 4, 5, 6, 7,
        5, 3, 2, 2, 3, 4, 5, 4, 3, 2, 7, 8, 8, 9,
        9, 8, 7, 6, 5, 4};

	Middle(answer);
	Median(answer);
	Mod(freq, answer);

	getch();
	return 0;
}

void Middle(const int answer[])
{
	int sum = 0;
	printf("%s\n%s\n%s\n","********","Middle","********");
	for (int i = 0; i < SIZE; i++)
       sum += answer[i];
	printf("Average=%.4f\n\n", (double)sum / SIZE);
}

void Median(int answer[])
{
	printf("\n%s\n%s\n%s\n%s","*******","Median","********","Order Array");
	Print(answer);
	Bubble(answer);
	printf("\n\nElement %d\n","Median %d.elemented.\n","Median %d\n\n", SIZE, SIZE / 2, answer[SIZE / 2]);
}

void Bubble(int answer[])
{
	for (int i = 1; i < answer; i++) {
       for (int j = 0; j < answer - 1; j++) {
            if (answer[j] > answer[j + 1]) {
				int tmp = answer[j];
				answer[j] = answer[j + 1];
				answer[j + 1] = tmp;
			}
       }
    }
}

void Mod(int freq[],  const int answer[])
{
    int puan, big = 0, mod_value = 0;
    printf("\n%s\n%s\n%s\n","*******","Mod","********");

    for (puan = 1; puan < 10; puan++)
        freq[puan] = 0;

    for (int j = 0; j < SIZE; j++)
        ++freq[answer[j]];

    printf("%s%11s%19s\n\n%54s\n%54s\n\n", "Answer", "Freq", "Histogram", " 1 1 2 2", "5 0 5 0 5");
    for (puan = 1; puan < 10; puan++) {
        printf("%8d%11d", puan, freq[puan]);
        if (freq[puan] > big){
            big = freq[puan];
            mod_value = puan;
        }
    }

    for (int h = 1; h <= freq[puan]; h++)
        printf("*");
    printf("\n");
    printf("\nMod : %d Count : %d \n", mod_value, big);
}

void Print(const int answer[])
{
	for (int i = 0; i < SIZE; i++) {
		if (i % 20 == 0)
		   printf("\n");
		printf("%2d", answer[i]);
    }
}
