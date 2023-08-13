#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	printf("%s\n%s%s\n%s%s\n%s\n\n", "for isspace: ",
		"New line", isspace('\n') ? "is the space character" : "bosluk karakteri degildir",
		"tab character", isspace('\t') ? "is the space character" : "is not the space character",
		isspace('%') ? "% is the space character" : "% is not the space character");

	printf("%s\n%s%s\n%s\n\n", "for iscntrl: ", "New line",
		iscntrl('\n') ? "is a control character" : "is not a control character",
		iscntrl('$') ? "is a control character" : "is not a control character");

	printf("%s\n%s\n%s\n%s\n\n", "for ispunct-: ",
		ispunct(';') ? "is a punctuation" : "is not a punctuation",
		ispunct('Y') ? "is a punctuation" : "is not a punctuation",
		ispunct('#') ? "is a punctuation" : "is not a punctuation");

	printf("%s\n%s\n%s%s\n\n", "for isprint: ",
		isprint('$') ? "is a font type" : "is not a font type",
		"Alarm", isprint('\a') ? "is a font type" : "is not a font type");

	printf("%s\n%s\n%s%s\n", "for isgraph: ",
		isgraph('Q') ? "is different from space" : "is not different from space",
		"Space", isgraph(' ') ? "is different from space" : "is not different from space");

	getch();
	return 0;
}
