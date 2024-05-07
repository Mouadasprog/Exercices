       /*programme de calcul de surfaces et perimètres des rectangles*/



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


        int main() {



                /*Declaration des variables*/

           float L,l,S,P;


                /*Entrée des données de l'utilisateur*/


            printf("Veuillez entrez la largeur: ");

            scanf("%f",&l);
            
            printf("Veuilez entrez la Longeur: ");
            
            scanf("%f",&L);


              /*Traitement des données*/

             S = L*l;
             P = 2*(L+l);


              /*Affichage des résultats*/


          printf("la surface est: %.2f\n",S);
          printf("le perimètre est %.2f\n",P);

            return 0;
            
            
              }
