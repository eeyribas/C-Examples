#include <stdio.h>
#include <stdio.h>

#define MAX_NAME     40
#define MAX_WRITER   40
#define MAX_BOOK    100

struct Book{
    char name[MAX_NAME];
    char writer[MAX_WRITER];
    float price;
};

int main()
{
    struct Book library[MAX_BOOK];
    int count = 0;

    printf("Enter book name: \n");
    printf("Exit: enter\'e.\n");
    while (count < MAX_BOOK && gets(library[count].name) != NULL && library[count].name[0] != '\0'){
        printf("Writer: \n");
        gets(library[count].writer);
        printf("Price: \n");
        scanf("%f", &library[count++].price);
        while (getchar() != '\n')
            continue;
        if(count < MAX_BOOK)
        printf("Name: \n");
    }

    if(count > 0){
        printf("Book List:\n");
        for(int index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].name, library[index].writer, library[index].price);
    } else{
        printf("There are no books.\n");
    }

    getch();
    return 0;
}
