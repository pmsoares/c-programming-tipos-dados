#include <stdio.h>
#include <locale.h>

void prog0215() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int num = 1000;
	printf("Introduza um carácter: ");
	scanf_s("%c", &num);

	printf("O valor de num = %d cujo carácter = %c\n", num, (char)num);

	/*
	*	char
	*		%c
		int
			%d - decimal
			%i - decimal
			%o - octal
			%x - hexadecimal

		short int
			%hd

		long int
			%ld

		unsigned short int
			%hu

		unsigned int
			%u

		unsigned long int
			%lu

		float
			%f
			%e
			%E

		double
			%f
			%e
			%E
	
	
	*/
}