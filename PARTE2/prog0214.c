#include <stdio.h>
#include <locale.h>

void prog0214() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int x;
	printf("Introduza um inteiro (0-255): ");
	scanf_s("%d", &x);

	printf("Foi introduzido '%d' cujo car�cter � '%c'\n", x, (char)x);
	printf("O car�cter seguinte '%d' � '%c'\n", x + 1, (char)(x + 1));
}