#include <stdio.h>
#include <locale.h>

void prog0208() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	/*
	Exercício:
		Escreva um programa que realize a conversão de toneladas para quilos e gramas, escrevendo o resultado em notação
		tradicional (aaaa.bbb) e científica (aaa E+-bb)
	*/

	double quilos = 1.0E3; // uma tonelada são 1000 quilos
	double gramas = 1.0e6; // uma tonelada são 1000000 gramas
	float toneladas;

	printf("Quantas toneladas comprou? ");
	scanf_s("%f", &toneladas);

	printf("Nº quilos = %f\t%e\n", toneladas * quilos, toneladas * quilos);
	printf("Nº gramas = %f\t%E\n\n", toneladas * gramas, toneladas * gramas);


	/*
		10		Inteiro 10
		-10		Inteiro -10
		10.		Real 10.0 (pois tem o ponto)
		10.0	Real 10.0 (pois tem o ponto)
		10.25	Real 10.25


		21 / 4			5
		21.0 / 4		5.25
		21 / 4.			5.25
		21.0 / 4.0		5.25
	*/
}