#include <stdio.h>
#include <locale.h>

void prog0206() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	/*
		Exercício:
		Escreva um programa que solicite ao utilizador a idade, o montante a depositar 
		e o nº de conta em que se quer realizar o depósito, declarando as variáveis como short, int e long.
	*/

	// sizeof <expressão>
	// sizeof (<tipo>)

	short idade; // para mostrar: %hd
	int montante;
	long n_conta; // para mostrar: %ld


	printf("Qual a Idade: "); scanf_s("%hd", &idade);
	printf("Qual o montante a depositar: "); scanf_s("%d", &montante);
	printf("Qual o nº da conta: "); scanf_s("%ld", &n_conta);

	printf("Uma pessoa de %hd anos depositou %d euros na conta %ld\n\n", idade, montante, n_conta);
	printf("Uma pessoa de %d anos depositou %d euros na conta %d\n", idade, montante, n_conta);


}