#include <stdio.h>
#include <stdlib.h>
#include <math.h>       /* ne pas oublier le -lm pour compiler la bibliothèque maths*/
#include <time.h>
#include "structures.h"
#include "distance.c"
#include "randomiser.c"
#include "afficher.c"
#include "tri_croissant.c"
#include "knn.c"

int main(int argc, char const *argv[])
{   

    Logement x = {0,2,2,2,200.0,2,200,2};

    // Ouverture du fichier
    FILE *fic = fopen("airbnb_donnees_propre.csv", "r");
    
    
    if(fic == NULL){exit(1);}

    int nb = 0;
    
    float tab[7918][8];
    
    if (fic != NULL)
    {
        // Lecture d'un caractère à la fois pour remplir le tableau avec les données du fichier.csv
        for (int i = 0; i < 7918; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                //fscanf(fic, "%f", tab[i][j]);
                nb = fgetc(fic);
                tab[i][j] = nb;
            }
        }
    }
    printf("Le tableau est rempli.\n");
    
    // Affichage du tableau
    afficher(tab);
    // Randomisation et tri du tableau dans l'ordre croissant
    srand(time(NULL));
    randomiser(tab,7918,8);
    afficher(tab);
    tri_croissant(tab);
    afficher(tab);
    // Affichage de la distance de similarité et des moyennes pour les k premiers logements
    distance(x,tab);
    knn(tab,5);
    knn(tab,10);
    knn(tab,15);
    // Fermeture du fichier
    fclose(fic);
    
    return 0;
}
