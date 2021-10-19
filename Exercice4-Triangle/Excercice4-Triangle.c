#include <stdlib.h>
#include <stdio.h>

int main() {
	int AB = 0, BC = 0, CA = 0;
	printf("\nEntrer la valeur du cote AB ");
	scanf_s("%d", &AB);
	printf("\nEntrer la valeur du cote BC ");
	scanf_s("%d", &BC);
	printf("\nEntrer la valeur du cote CA ");
	scanf_s("%d", &CA);

	// Version courte : Un seul 'if' regroupant les conditions
	// avec des opérateurs logiques
	if ((AB >= 0) && (BC >= 0) && (CA >= 0) && (AB + BC > CA) && (AB + CA > BC) && (BC + CA > AB))
		printf("Ce triangle existe. \n");
	else
		printf("Ce triangle n'existe pas. \n");
}