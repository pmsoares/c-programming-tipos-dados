/*
	Escreva um programa em C que solicite um determinado número de segundos e
	em seguida indique quantas horas, minutos e segundos esse valor representa.
*/

#include <stdio.h>
#include <locale.h>

void prog0217() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	long int n_segundos = 0;
	printf("Introduza o nº de segundos: ");
	scanf_s("%ld", &n_segundos);
	printf("Horas: %ld\n", n_segundos / 3600);
	printf("Minutos: %ld\n", n_segundos % 3600 / 60);
	printf("Segundos: %ld\n", n_segundos % 60);
}