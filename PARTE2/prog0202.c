#include <stdio.h>
#include <locale.h>

void prog0202() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int num;

	puts("Introduza a sua idade (anos):");
	scanf_s("%d", &num);

	printf("Nasceu em : %d\n", 2021-num);
}