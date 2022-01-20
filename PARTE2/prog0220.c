#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int dia, mes, ano;
	printf("Data (formato aaaa-mm-dd): ");
	scanf_s("%d-%d-%d", &ano, &mes, &dia);
	printf("Data completa: %02d/%02d/%04d\n", dia, mes, ano);
}