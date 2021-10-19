#include <stdlib.h>
#include <stdio.h>

int main() {
	//Retourner 3 entiers trié
	int tmp, A, B, C;


	printf("\nEntrer la valeur A : ");
	scanf_s("%d", &A);
	printf("\nEntrer la valeur B : ");
	scanf_s("%d", &B);
	printf("\nEntrer la valeur C : ");
	scanf_s("%d", &C);

	if (B <= A) {
		tmp = A;
		A = B;
		B = tmp;
	}
	if (C <= A) {
		tmp = A;
		A = C;
		C = tmp;
	}
	if (C <= B) {
		tmp = B;
		B = C;
		C = tmp;
	}

	printf("%d <= %d <= %d", A, B, C);


	return (EXIT_SUCCESS);
}