#include <math.h>
#include <stdio.h>

int main() {
    /* Declaration des variables */
    
    float distance,a,b,Xa,Xb,Ya,Yb;

    /* Entrée des données de l'utilisateur */
    printf("Veuillez entrer l'abscisse de A: ");
    scanf("%f", &Xa);
    printf("Veuillez entrer l'ordonnée de A: ");
    scanf("%f", &Ya);
    printf("Veuillez entrer l'abscisse de B: ");
    scanf("%f",&Xb);
    printf("Veuillez entrer l'ordonnée de B: ");
    scanf("%f",&Yb);

    /* Traitement des données */
       
       a = Xa - Xb;
       b = Ya - Yb;
       distance = sqrt(pow(a,2)+pow(b,2));

    /* Affichage des résultats */

    printf("La distance entre A et B est: %.2f\n",distance);
   

    return 0;
}