#include <stdio.h>
#include <math.h>
#include <locale.h>

void prog0207() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	/*
	Exercício:
		Escreva um programa que calcule o perímetro e a área de uma circunferência

		ÁREA = PI * RAIO * RAIO
		PERÍMETRO = 2 * PI * RAIO

		float e double:	%f
	*/

	float raio, perimetro;
	double PI = 3.1415927, area;

	printf("Introduza o raio da circunferência: ");
	scanf_s("%f", &raio);
	area = PI * pow(raio, 2);
	perimetro = 2 * PI * raio;

	printf("Área = %.2f\nPerímetro = %.2f\n", area, perimetro);

}