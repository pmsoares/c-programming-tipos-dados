#include <stdio.h>
#include <locale.h>

void prog0210() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char ch;
	int n;

	printf("Introduza um carácter: ");
	scanf_s("%c", &ch, 1);
	printf("O carácter introduzido foi '%c'\n", ch);

	printf("Introduza agora a sua idade: ");
	scanf_s("%d", &n);
	printf("A sua idade é %d\n", n);
}