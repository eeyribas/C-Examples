#include <stdio.h>
#include <string.h>

struct Student
{
	char name[30];
	int age;
	char gender;
	char number[12];
	double gpa;
};

typedef struct Books
{
	char name[50];
	char author[30];
	int year;
} Book;

main(int argc, char *argv[])
{
	int i;

	struct Student Mustafa;
	struct Student Furkan = {"Furkan Gonc", 21, 'M', "23456789012", 3.59};
	struct Student *p;
	struct Student students[5];

	struct Books book1 = {"Robinson Crusoe", "Daniel Defoe", 1972};
	Book book2 = {"Fareler ve Insanlar", "John Steinback", 1986};

	strcpy(Mustafa.name, "Mustafa Tambulut");
	Mustafa.age = 21;
	Mustafa.gender = 'M';
	strcpy(Mustafa.number, "12345678901");
	Mustafa.gpa = 3.99;

	p = &Mustafa;
	(*p).gpa = 2.99;
	p -> gpa = 1.99;

	for (i = 0; i < 5; i++)
	{
		fflush(stdin);
		printf("Enter student's name: "); gets(students[i].name);
		printf("Enter %s's age: ", students[i].name); scanf("%d", &students[i].age);
		fflush(stdin);
		printf("Enter %s's gender: ", students[i].name); scanf("%c", &students[i].gender);
		fflush(stdin);
		printf("Enter %s's Number: ", students[i].name); gets(students[i].number);
		printf("Enter %s's GPA: ", students[i].name); scanf("%lf", &students[i].gpa);
	}

	for (i = 0; i < 5; i++)
	{
		printf("%30s %3d %2c %11s %4.2lf\n",
			students[i].name,
			students[i].age,
			students[i].gender,
			students[i].number,
			students[i].gpa);
	}
}
