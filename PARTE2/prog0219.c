#include <stdio.h>
#include <locale.h>

void prog0219() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int dia, mes, ano;
	printf("Ano: "); scanf_s("%d", &ano);
	printf("Mês: "); scanf_s("%d", &mes);
	printf("Dia: "); scanf_s("%d", &dia);
	printf("Data completa: %02d/%02d/%04d\n", dia, mes, ano);
}