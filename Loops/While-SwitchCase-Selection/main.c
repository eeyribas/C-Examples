#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("Please enter letters (Exit = #) :\n");
    char ch;

    while ((ch = getchar()) != '#') {
        if ('\n' == ch)
            continue;

        if (islower(ch)) {
            switch (ch) {
                case 'a':
                    printf("Armadillo\n");
                    break;
                case 'b':
                    printf("Bee\n");
                    break;
                case 'c':
                    printf("Cockroach\n");
                    break;
                case 'd':
                    printf("Dog\n");
                    break;
                case 'e':
                    printf("Elephant\n");
                    break;
                case 'f':
                    printf("Foxes\n");
                    break;
                default:
                    printf("There is no animal name in this letter!\n");
            }
        } else {
            printf("Lower case only.\n");
            while (getchar() != '\n')
                continue;
            printf("Letter or #.\n");
        }
    }

    printf("Goodbye!\n");

    getch();
    return 0;
}
