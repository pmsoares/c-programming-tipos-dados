/*
Exercício 1:
	Escreva um programa em C que solicite ao utilizador dois inteiros e
	apresente o resultado da realização das operações aritméticas tradicionais.
*/

#include <stdio.h>
#include <locale.h>

void prog0216() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int a, b;
	a = b = 0;

	printf("Introduza dois inteiros: ");
	scanf_s("%d%d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
}