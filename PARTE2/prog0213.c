#include <stdio.h>
#include <locale.h>

void prog0213() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char ch;
	printf("Introduza um carácter: ");
	
	ch = getchar();
	printf("O carácter '%c' tem o ASCII nº %d\n", ch, (int)ch);
}