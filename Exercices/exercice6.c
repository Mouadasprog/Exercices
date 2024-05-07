#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    /* Declaration des variables */
    float r,volume;
    const float Pi = 3.14;

    /* Entrée des données de l'utilisateur */
    printf("Veuillez entrer le rayon du sphére: ");
    scanf("%f", &r);

    /* Traitement des données */
    volume = (4 * Pi * pow(r,3))/3;

    /* Affichage des résultats */
    printf("La volume du sphére est: %.2f\n", volume);

    return 0;
}

