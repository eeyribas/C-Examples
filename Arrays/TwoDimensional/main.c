#include<stdio.h>
#include<conio.h>

#define student 3
#define exam 4

int Minumum (const int [][exam], int, int);
int Maximum (const int [][exam], int, int);
double Average(const int[], int);
void Write(const int[][exam], int, int);

int main(){
	int stu;
	const int a[student][exam]={{77,68,86,73},{96,87,89,78},{70,90,86,81}};
	printf("Array:\n");
	Write(a, student, exam);
	printf("\n\nMin. note:%d\nMax. note:%d\n", Minumum(a, student, exam), Maximum(a, student, exam));

	for(stu=0; stu<student; stu++)
    {
		printf("Average : %.2f\n", Average(a[stu], exam));

	}

		getch();
		return 0;

}

int Minumum(const int a[][exam], int students, int tests){
		int i, j, min=100;
		for(i=0; i<students; i++)
        {
            for(j=0; j<tests; j++)
            {
                if(a[i][j]<min)
                {
                    min=a[i][j];
                }
            }
        }

		return min;
}

int Maximum(const int a[][exam], int students, int tests){
	int i, j, max=0;
	for(i=0; i<students; i++)
    {
        for(j=0; j<tests; j++)
        {
           if(a[i][j]>max)
           {
               max=a[i][j];
           }
        }
    }

	return max;
}

double Average(const int a[], int tests){
	int i, sum=0;
	for(i=0; i<tests; i++)
    {
        sum += a[i];
    }

	return (double)sum/tests;
}

void Write(const int a[][exam], int students, int tests){
	int i, j;
	printf("    [0][1][2][3]");

	for(i=0; i<students; i++)
    {
		printf("\nStudents Notes[%d]:",i);

		for(j=0; j<tests; j++)
        {
            printf("%-5d", a[i][j]);
        }
	}
}
