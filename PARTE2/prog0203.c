#include <stdio.h>
#include <locale.h>

void prog0203() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int num1, num2;

	puts("Introduza dois n�meros:");
	scanf_s("%d%d", &num1, &num2);

	printf("N�meros introduzidos\n1�: %d\n2�: %d\n", num1, num2);
}