#include <stdio.h>
#include <conio.h>

#define STUDENT 3
#define EXAM 4

int Minumum (const int [][EXAM ], int, int);
int Maximum (const int [][EXAM ], int, int);
double Average(const int[], int);
void Write(const int[][EXAM ], int, int);

int main()
{
	const int a[STUDENT][EXAM] = {{77,68,86,73},{96,87,89,78},{70,90,86,81}};
	printf("Array:\n");
	Write(a, STUDENT, EXAM );
	printf("\n\nMin. note:%d\nMax. note:%d\n", Minumum(a, STUDENT, EXAM), Maximum(a, STUDENT, EXAM));

	for(int stu = 0; stu < STUDENT; stu++)
        printf("Average : %.2f\n", Average(a[stu], EXAM));

    getch();
    return 0;
}

int Minumum(const int a[][EXAM], int students, int tests)
{
    int min = 100;
    for(int i = 0; i < students; i++){
        for(int j = 0; j < tests; j++){
            if(a[i][j]<min)
                min=a[i][j];
        }
    }

    return min;
}

int Maximum(const int a[][EXAM], int students, int tests)
{
	int max = 0;
	for(int i = 0; i < students; i++){
        for(int j = 0; j < tests; j++){
            if(a[i][j] > max)
                max=a[i][j];
        }
    }

	return max;
}

double Average(const int a[], int tests)
{
	int sum = 0;
	for(int i = 0; i < tests; i++)
        sum += a[i];

	return (double)sum / tests;
}

void Write(const int a[][EXAM], int students, int tests)
{
	printf("    [0][1][2][3]");

	for(int i = 0; i < students; i++){
		printf("\nStudents Notes[%d]:", i);
		for(int j = 0; j < tests; j++)
            printf("%-5d", a[i][j]);
	}
}
