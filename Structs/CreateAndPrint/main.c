#include <stdio.h>

struct Example{
    char name[20];
	char surname[20];
    char tel[10];
};

struct Example list[4];
void Create(struct Example list[]);
void Print(const struct Example list[]);

int main()
{
    Create(list);
    Print(list);

    return 0;
}

void Create(struct Example list[])
{
    for(int i = 0; i < 4; i++){
		printf("Name: ");
		scanf("%s", list[i].name);
		printf("Surname: ");
 		scanf("%s", list[i].surname);
 		printf("telephone format: 555-6666 : ");
 		scanf("%s", list[i].tel);
 	}
}

void Print(const struct Example list[])
{
    printf("\n\n");
    for(int i = 0; i < 4; i++){
 		printf("Name: %s %s", list[i].name, list[i].surname);
 		printf("\t\tTelephone: %s\n", list[i].tel);
    }
}
