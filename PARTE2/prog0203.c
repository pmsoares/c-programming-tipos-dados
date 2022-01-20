#include <stdio.h>
#include <locale.h>

void prog0203() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int num1, num2;

	puts("Introduza dois números:");
	scanf_s("%d%d", &num1, &num2);

	printf("Números introduzidos\n1º: %d\n2º: %d\n", num1, num2);
}