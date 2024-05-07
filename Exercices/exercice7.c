#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    /* Declaration des variables */
    float a, b,c;

    /* Entrée des données de l'utilisateur */
    printf("Veuillez entrer la valeur de a: ");
    scanf("%f", &a);

    printf("Veuillez entrer la valeur de b: ");
    scanf("%f", &b);

    /* Traitement des données */
    c = a;
    a = b;
    b = c; 
    /* Affichage des résultats */
    printf("La valeur de a est: %.2f\n",a);
    printf("la valeur de b est: %.2f\n",b);

    return 0;
}
