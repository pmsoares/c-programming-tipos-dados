#include <stdio.h>
#include <math.h>
#include <locale.h>

void prog0207() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	/*
	Exerc�cio:
		Escreva um programa que calcule o per�metro e a �rea de uma circunfer�ncia

		�REA = PI * RAIO * RAIO
		PER�METRO = 2 * PI * RAIO

		float e double:	%f
	*/

	float raio, perimetro;
	double PI = 3.1415927, area;

	printf("Introduza o raio da circunfer�ncia: ");
	scanf_s("%f", &raio);
	area = PI * pow(raio, 2);
	perimetro = 2 * PI * raio;

	printf("�rea = %.2f\nPer�metro = %.2f\n", area, perimetro);

}