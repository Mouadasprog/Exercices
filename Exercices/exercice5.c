#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    /* Declaration des variables */
    float a, b,c,d,e,somme,moyenne;

    /* Entrée des données de l'utilisateur */
    printf("Veuillez entrer la première valeur: ");
    scanf("%f", &a);

    printf("Veuillez entrer la deuxième valeur: ");
    scanf("%f", &b);

    printf("Veuillez entrer la troisième valeur: ");
    scanf("%f", &c);

    printf("Veuillez entrer la 4ème valeur: ");
    scanf("%f", &d);

    printf("Veuillez entrer la 5ème valeur: ");
    scanf("%f", &e);


    /* Traitement des données */
    somme = a+b+c+d+e;
    moyenne = (a+b+c+d+e)/2;

    /* Affichage des résultats */
    printf("La valeur de la somme est: %.2f\n",somme);
    printf("La valeur de moyenne est: %.2f\n",moyenne);

    return 0;
}
