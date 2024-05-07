#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    /* Declaration des variables */
    float a, b,produit,somme,soustraction,division;

    /* Entrée des données de l'utilisateur */
    printf("Veuillez entrer la première valeur: ");
    scanf("%f", &a);

    printf("Veuillez entrer la deuxième valeur: ");
    scanf("%f", &b);

    /* Traitement des données */
    somme = a + b;
    division = a / b;
    soustraction = a - b;
    produit = a * b;

    /* Affichage des résultats */
    printf("le produit va égale à: %.f\n",produit);
    printf("la somme va égale à: %.f\n",somme);
    printf("la soustraction va égale à: %.f\n",soustraction);
    printf("la division va égale à: %.f\n",division);

    return 0;
}
