#include <stdio.h>
#include <locale.h>

void prog0211() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char ch1, ch2;

	printf("Introduza um car�cter: ");
	scanf_s("%c", &ch1, 1);
	printf("Introduza um segundo car�cter: ");
	// o espa�o em branco antes de %c permite ao scanf ignorar espa�os, tab e new line introduzidos pelo utilizador
	scanf_s(" %c", &ch2, 1);

	//fflush(stdin);

	printf("Os caracteres introduzidos foram '%c' e '%c'\n", ch1, ch2);
}