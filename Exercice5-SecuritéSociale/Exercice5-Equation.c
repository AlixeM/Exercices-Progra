#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	int A, B, C, delta, equa, equa2;
	printf("\nEntrer la valeur du coefficient A ");
	scanf_s("%d", &A);
	printf("\nEntrer la valeur du coefficient B ");
	scanf_s("%d", &B);
	printf("\nEntrer la valeur du coefficient C ");
	scanf_s("%d", &C);

	if (A == 0) {
		equa = -C / B;
		printf("X est égal à %d", equa);
	}
	if (A == 0 && B == 0)
		printf("X est égal à %d", C);
	else {
		delta = B ^ 2 - 4 * A * C;
		if (delta < 0)
			printf("pas de solutions");
		else {
			equa = (-B + sqrt(delta)) / 2 * A;
			equa2 = (-B - sqrt(delta)) / 2 * A;
			printf("les deux racines de X sont %d et %c", equa, equa2);
		}
	}
}