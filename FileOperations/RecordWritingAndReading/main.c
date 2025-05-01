#include <stdio.h>
#include <conio.h>

typedef struct Student{
	char name[50];
	char surname[50];
	char no[100];
}Student;

void Read(char *f_name)
{
    Student student;

	FILE *file;
	file = fopen(f_name, "r");
	if (file == NULL)
		printf("File is not open.");

	while (!feof(file)) {
		fscanf(file, "%s %s %s", &student.name, &student.surname, &student.no);
		puts("Name = ");
		puts(student.name);
		puts("Surname = ");
		puts(student.surname);
		puts("No = ");
		puts(student.no);
	}
}

void Write(char *f_name)
{
    Student student;

	FILE *file;
	file = fopen(f_name, "w");
	if (file == NULL)
		printf("File is not open.");

	printf("Info \n ");
	printf("Name : ");
	scanf("%s", &student.name);
	printf("Surname : ");
	scanf("%s", &student.surname);
	printf("No : ");
	scanf("%s", &student.no);
	fprintf(file, "%s %s %s ", student.name, student.surname, student.no);
	fclose(file);
}

int main()
{
	printf("File name = ");
	char f_name[50];
	gets(f_name);
	printf("1-Write\n2-Read\n Selection = \n");
	int select;
	scanf("%d", &select);
	switch (select) {
        case 1:
            Write(f_name);
            break;
        case 2:
            Read(f_name);
            break;
        default:
            printf("Error.");
            break;
	}

	getchar();
	getch();
	return 0;
}
