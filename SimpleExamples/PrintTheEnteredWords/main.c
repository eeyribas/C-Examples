#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
    int n = 0;
    char **word;
    printf("Word Count = ");
    scanf("%d", &n);
    word = (char *)malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++) {
        word[i] = (char *)malloc(sizeof(char));
        printf("Enter words = ");
        scanf("%s", word[i]);
    }

    printf("<--->Words<--->\n");
    for (int i = 0; i < n; i++)
        printf("%s\n",word[i]);

    free(word);

    getch();
    return 0;
}
