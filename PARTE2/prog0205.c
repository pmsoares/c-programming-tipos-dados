#include <stdio.h>
#include <locale.h>

void pro0205() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	// sizeof <expressão>
	// sizeof (<tipo>)

	printf("O tamanho em Bytes de um Inteiro = %d\n", sizeof(int));
	printf("O tamanho em Bytes de um Carácter = %d\n", sizeof(char));
	printf("O tamanho em Bytes de um Float = %d\n", sizeof(float));
	printf("O tamanho em Bytes de um Double = %d\n", sizeof(double));
}