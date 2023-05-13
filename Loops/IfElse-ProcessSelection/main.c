#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
	char ch;
	printf("Choose process :\n");
	printf("+,-,*,/\n");
	ch=getche();
	printf("\nEnter two integers : ");
	scanf("%d %d", &a, &b);

	if(ch=='+')
        printf("%d+%d=%d\n", a, b, a + b);
	else if(ch=='-')
        printf("%d-%d=%d\n", a, b, a - b);
	else if(ch=='*')
        printf("%d*%d=%d\n", a, b, a * b);
	else if(ch=='/')
        printf("%d/%d=%d\n", a, b, a / b);
	else
        printf("You entered an invalid transaction!!!!\n");

    return 0;
}
