/*
	Escreva um programa em C que solicite um determinado n�mero real
	e mostre qual a sua parte inteira e a sua parte fracion�ria.
*/

#include <stdio.h>
#include <locale.h>

void prog0218() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float x;
	printf("Introduza um n�mero real: ");
	scanf_s("%f", &x);
	printf("Parte inteira: %d\n", (int)x);
	printf("Parte fracion�ria: %f\n", x - ((int)x));
}