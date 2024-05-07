#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    /* Declaration des variables */
    float a, b;

    /* Entrée des données de l'utilisateur */
    printf("Veuillez entrer la valeur de a: ");
    scanf("%f", &a);

    printf("Veuillez entrer la valeur de b: ");
    scanf("%f", &b);

    /* Traitement des données */

    b = a + b;
    a = b - a;
    b = b - a;   

    /* Affichage des résultats */
    printf("La valeur de a est: %.2f\n",a);
    printf("la valeur de b est: %.2f\n",b);

    return 0;
}
