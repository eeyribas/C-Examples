#include <stdio.h>
#define CH 'C'
#define INT 'I'
#define FLO 'F'

struct Data{
    char type;
    union data
    {
        char c;
        int i;
        float f;
    }common;
};

void Print( struct Data bilgi );

int main()
{
    struct Data var;
	var.type = CH;
	var.common.c = '$';
	Print(var);
    var.type = FLO;
    var.common.f = (float) 12345.67890;
    Print(var);
	var.type = 'x';
	var.common.i = 111;
	Print(var);

    return 0;
}

void Print(struct Data var)
{
    printf("\n\nThe Data...");
    switch(var.type)
    {
        case CH:
            printf("%c", var.common.c);
            break;
        case INT:
            printf("%d", var.common.i);
			break;
        case FLO:
            printf("%f", var.common.f);
            break;
        default:
            printf("Dont know: %c\n", var.type);
            break;
    }
}
