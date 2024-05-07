#include <math.h>
#include <stdio.h>

int main() {
    /* Declaration des variables */
    
    float R1,R2,R3,RP,RS;

    /* Entrée des données de l'utilisateur */
    printf("Veuillez entrer la valeur R1: ");
    scanf("%f", &R1);
    printf("Veuillez entrer la valeur R2: ");
    scanf("%f", &R2);
    printf("Veuillez entrer la valeur R3: ");
    scanf("%f",&R3);
    

    /* Traitement des données */
       
      RP = 1/((1/R1)+(1/R2)+(1/R3));
      RS = R1 + R2 + R3;

    /* Affichage des résultats */

    printf("RP = %.2f\n",RP);
    printf("RS = %.2f\n",RS);
   

    return 0;
}