       
       /*programme de calcul d'age à partir de année de naissance*/



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


        int main() {



                /*Declaration des variables*/

            int année_de_naissance,age,année_actuel;


                /*Entrée des données de l'utilisateur*/


            printf("Veuillez entrez votre année de naissance: ");

            scanf("%d",&année_de_naissance);
            
            printf("Veuilez entrez l'année actuel: ");
            
            scanf("%d",&année_actuel);


              /*Traitement des données*/

             age = année_actuel - année_de_naissance;


              /*Affichage des résultats*/


          printf("Votre age des aujourd'hui est: %.2d\n",age);

            return 0;
            
            
              }







       





