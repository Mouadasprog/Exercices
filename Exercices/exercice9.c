#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    /* Declaration des variables */
    int H,a,b,M,S;

    /* Entrée des données de l'utilisateur */
    printf("Veuillez entrer le temps en secondes: ");
    scanf("%d", &a);

    /* Traitement des données */
      H = a / 3600;
      b = a % 3600;
      M = b / 60;
      S = b % 60;


    /* Affichage des résultats */
    printf(" le temps détaillé est: %dH %dM %dS\n",H,M,S);

    return 0;
}
