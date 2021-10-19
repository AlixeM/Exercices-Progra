#include <stdlib.h>
#include <stdio.h>

int main() { ;

		// Calcul de l'impot en fonction du revenu net imposable
		// déclaration de variables
		int TB = 10065; double TTB = 0.11;
		int TC = 25660; double TTC = 0.30;
		int TD = 73370; double TTD = 0.41;
		int TE = 157807; double TTE = 0.45;
		
		int RNI = 0; // Revenu net imposable
		double impot= 0; // montant de l'impôt
		
		int revenuTmp;
		
		// saisie du revenu net imposable
		printf("\nEntrez votre revenu net imposable : ");
		scanf_s("%d", &RNI);
		revenuTmp = RNI;

		// montant dans la tranche E
		if(revenuTmp> TE) {
			impot= (revenuTmp-TE ) * TTE;
			revenuTmp = TE;
		}
		// montant dans la tranche D
		if(revenuTmp> TD) {
			impot= impot+ (revenuTmp-TD ) * TTD;
			revenuTmp= TD;
		}
		// montant dans la tranche C
		if(revenuTmp> TC) {
			impot= impot+ (revenuTmp-TC ) * TTC;
			revenuTmp= TC;
		}
		// montant dans la tranche B
		if(revenuTmp> TB) {
			impot= impot+ (revenuTmp-TB) * TTB;
			revenuTmp= TB;
		}
		// Affichage du montant de l'impôt
		printf("\nle montant de votre impot pour un revenu net imposable de %d s'eleve a %d euros.", RNI, (int)impot);

	}