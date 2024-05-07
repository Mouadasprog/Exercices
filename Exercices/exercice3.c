       /*programme de calcul de puissance*/



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


  int main() {



                /*Declaration des variables*/

  float a,b,puissance;


                /*Entrée des données de l'utilisateur*/


  printf("Veuillez entrez la première valeur: ");

  scanf("%f",&a);
            
  printf("Veuilez entrez la deuxième valeur: ");
            
  scanf("%f",&b);


              /*Traitement des données*/

     puissance = pow(a,b);


              /*Affichage des résultats*/


   printf("la valeur de puissance est: %.2f\n",puissance);

            return 0;
            
            
              }
