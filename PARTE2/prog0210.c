#include <stdio.h>
#include <locale.h>

void prog0210() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char ch;
	int n;

	printf("Introduza um car�cter: ");
	scanf_s("%c", &ch, 1);
	printf("O car�cter introduzido foi '%c'\n", ch);

	printf("Introduza agora a sua idade: ");
	scanf_s("%d", &n);
	printf("A sua idade � %d\n", n);
}