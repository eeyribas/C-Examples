#include <stdlib.h>
#include <stdio.h>

#define BUF_LEN 6

int main()
{
    char msg[] = "abcdefghijklmnopqrstuvwxyz";
    char buf[BUF_LEN];

    FILE *file;
    if ((file = fopen("TEXT.TXT", "w")) == NULL) {
        fprintf(stderr, "Error.");
        exit(1);
    }

    if (fputs(msg, file) == EOF) {
        fprintf(stderr, "Error.");
        exit(1);
    }
    fclose(file);

    if ((file = fopen("TEXT.TXT", "r")) == NULL) {
        fprintf(stderr, "Error.");
        exit(1);
    }

    printf("\nAfter open file, position = %ld", ftell(file));
    fgets(buf, BUF_LEN, file);
    printf("\nCharacters %s read, position = %ld", buf, ftell(file));
    fgets(buf, BUF_LEN, file);
    printf("\n\nAfter 5 characters %s, and position = %ld", buf, ftell(file));
    rewind(file);
    printf("\n\nBack come position: %ld", ftell(file));
    fgets(buf, BUF_LEN, file);
    printf("\nRead: %s\n", buf);
    fclose(file);

    getch();
    return 0;
}
