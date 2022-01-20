#include <stdio.h>
#include <locale.h>

void prog0212() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char ch1 = 'A';
	char ch2 = 65;
	char ch3 = '\101';
	char ch4 = '\x41';

	printf("%c\t%c\t%c\t%c\n", ch1, ch2, ch3, ch4);
}