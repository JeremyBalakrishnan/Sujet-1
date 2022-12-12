#include <stdio.h>
#include <stdlib.h>
#include <math.h>       /* ne pas oublier le -lm pour compiler la bibliothèque maths */
#include <time.h>
#include "structures.h"
#include "afficher.h"

/* affiche les logements stockés dans le tableau */

void afficher(float tab[7918][8])
{
    
     for (int i = 0; i < 7918; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                printf("%4.2f\n", tab[i][j]);
                /* printf("%d - %d - %d - %d - %f - %d - %d - %d\n", temp->accommodates, temp->bedrooms, temp->bathrooms, temp->beds, temp->price, temp->minimum_nights, temp->maximum_nights, temp->number_of_reviews);*/
            }
        }
}