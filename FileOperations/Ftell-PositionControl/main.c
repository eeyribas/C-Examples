#include <stdlib.h>
#include <stdio.h>

#define BUF_LEN 6

char msg[] = "abcdefghijklmnopqrstuvwxyz";

int main()
{
    FILE *fp;
    char buf[BUF_LEN];

    if((fp = fopen("TEXT.TXT", "w")) == NULL){
        fprintf(stderr, "Error.");
        exit(1);
    }
    if(fputs(msg, fp) == EOF){
        fprintf(stderr, "Error.");
        exit(1);
    }
    fclose(fp);

    if((fp = fopen("TEXT.TXT", "r")) == NULL){
        fprintf(stderr, "Error.");
        exit(1);
    }

    printf("\nAfter open file, position = %ld", ftell(fp));
    fgets(buf, BUF_LEN, fp);
    printf("\nCharacters %s read, position = %ld", buf, ftell(fp));
    fgets(buf, BUF_LEN, fp);
    printf("\n\nAfter 5 characters %s, and position = %ld",
    buf, ftell(fp));
    rewind(fp);
    printf("\n\nBack come position: %ld", ftell(fp));
    fgets(buf, BUF_LEN, fp);
    printf("\nRead: %s\n", buf);
    fclose(fp);

    return(0);
}
