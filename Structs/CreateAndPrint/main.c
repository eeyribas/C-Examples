#include <stdio.h>

struct example {
    char name[20];
	char surname[20];
    char tel[10];
};

struct example list[4];
int i;
void Create(struct example list[]);
void Print(const struct example list[]);

int main()
{
    Create(list);
    Print(list);

    return 0;
}

void Create(struct example list[])
{
 	for (i = 0; i < 4; i++)
 	{
		printf("\nName: ");
		scanf("%s", list[i].name);
		printf("Surname: ");
 		scanf("%s", list[i].surname);
 		printf("telephone format: 555-6666 : ");
 		scanf("%s", list[i].tel);
 	}
}

void Print(const struct example list[])
{
    printf("\n\n");
    for (i = 0; i < 4; i++)
    {
 		printf("Name: %s %s", list[i].name, list[i].surname);
 		printf("\t\tTelephone: %s\n", list[i].tel);
    }
}
