#include<stdio.h>
#include<conio.h>

int main()
{
	char text[80];
	void Reverse(const char *const);

	printf("Enter text = ");
	gets(text);

	printf("\nReverse text = ");
	Reverse(text);

	getch();
	return 0;
}

void Reverse(const char *const s)
{
	if(s[0] == '\0')
    {
        return;
    }
	else
    {
		Reverse(&s[1]);
		putchar(s[0]);
	}
}
