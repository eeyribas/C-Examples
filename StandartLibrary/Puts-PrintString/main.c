#include <stdio.h>
#define DEF "#define"

int main(void)
{
    char str_1[80] = "char str_1.";
    const char* str_2 = "const char*.";
    puts("Print");
    puts(DEF);
    puts(str_1);
    puts(str_2);
    puts(&str_1[5]);
    puts(str_2+4);

    return 0;
}
