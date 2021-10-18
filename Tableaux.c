#include <stdio.h>
#include <stdlib.h>
#define TAILLE 100

int main() {
	float notes[TAILLE] = { 0.0 };

	//Autre manière d'innitialiser avec que des 1//

	/*for (int i = 0; i < TAILLE; i++) {
		notes[i] = 1.0;
	}*/

	for (int i = 0; i < TAILLE; i++) {
		printf("%.2f", notes[i]);
		if ((i + 1) % 10 == 0) {
			printf("\n");
		}
	}

	//Saisie Utilisateur :

	float valeur = 0.0;
	int nbValeur = 0;
	int valeurOK = 1;
	float somme = 0;
	while (valeurOK && valeur >= 0 && nbValeur < 100) {
		printf("Veuillez saisir un nombre a virgule :");
		valeurOK = scanf_s("%f", &valeur);
		if (valeurOK && valeur >= 0) {
			notes[nbValeur] = valeur;
			nbValeur++;
		}
	}



	int position = 0;
	printf("Veuillez saisir un nombre a virgule :");
	valeurOK = scanf_s("%f", &valeur);
	printf("L'inserer a quelle position ? :");
	valeurOK += scanf_s("%d", &position);
	//printf("Valeur saisie : %f", valeur);
	if (valeurOK == 2 && valeur >= 0 && position <= TAILLE - 1) {
		if (position >= nbValeur) { position = nbValeur; }
		for (int ind = nbValeur - 1; ind >= position; ind--) {
			notes[ind + 1] = notes[ind];
		}


		//Somme :
		for (int i = 0; i < nbValeur; i++) {
			somme += notes[i];
		}

		float moyenne = somme / nbValeur;
		printf("La moyenne des %d notes saisie est %.2f", nbValeur, moyenne);

		for (int i = 0; i < TAILLE; i++) {
			printf("%.2f", notes[i]);
			if ((i + 1) % 10 == 0) {
				printf("\n");
			}
		}

	}

}