#include <stdio.h>
#include <locale.h>

void prog0204() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	// sizeof <express�o>
	// sizeof (<tipo>)

	printf("O tamanho em Bytes de um Inteiro = %d\n", sizeof(int));
}