/*
	Escreva um programa em C que solicite um determinado número real
	e mostre qual a sua parte inteira e a sua parte fracionária.
*/

#include <stdio.h>
#include <locale.h>

void prog0218() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float x;
	printf("Introduza um número real: ");
	scanf_s("%f", &x);
	printf("Parte inteira: %d\n", (int)x);
	printf("Parte fracionária: %f\n", x - ((int)x));
}