#include <stdio.h>
#include <locale.h>

void prog0213() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char ch;
	printf("Introduza um car�cter: ");
	
	ch = getchar();
	printf("O car�cter '%c' tem o ASCII n� %d\n", ch, (int)ch);
}