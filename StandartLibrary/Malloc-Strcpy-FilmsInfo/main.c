#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE    45

struct Film
{
    char title[TSIZE];
    int rating;
    struct Film *next;
};

int main(void)
{
    struct Film *head = NULL;
    struct Film *prev, *current;
    char input[TSIZE];

    puts("Enter first movie title:");
    while(gets(input) != NULL && input[0] != '\0'){
        current = (struct Film *)malloc(sizeof(struct Film));
        if (head == NULL)
            head = current;
        else
            prev->next = current;
        current->next = NULL;
        strcpy(current->title, input);
        puts("Enter your rating <0-10>:");
        scanf("%d", &current->rating);
        while(getchar() != '\n')
            continue;
        puts("Enter next movie title (empty line to stop):");
        prev = current;
    }

    if (head == NULL)
        printf("No data entered. ");
    else
        printf ("Here is the movie list:\n");
    current = head;
    while(current != NULL){
        printf("Movie: %s  Rating: %d\n", current->title, current->rating);
        current = current->next;
    }

    current = head;
    while(current != NULL){
        free(current);
        current = current->next;
    }
    printf("Bye!\n");

    getch();
    return 0;
}
