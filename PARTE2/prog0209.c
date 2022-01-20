#include <stdio.h>
#include <locale.h>

void prog0209() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char nova_linha = '\n';

	printf("%c%c%c%c%c%c%c%c%c\n", 'P', nova_linha,'E',nova_linha,'D', nova_linha, 'R', nova_linha, 'O');
}