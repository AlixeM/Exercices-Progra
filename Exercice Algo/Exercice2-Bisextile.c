#include <stdlib.h>
#include <stdio.h>

int main() {

	int annee;

	printf("\nEntrez une annee : ");
	scanf_s("%d", &annee);

	if (((annee % 4 == 0) && (annee % 100 != 0)) || (annee % 400 == 0))
		printf("Bisextile");
	else printf("Non Bisextile");

	return (EXIT_SUCCESS);
}