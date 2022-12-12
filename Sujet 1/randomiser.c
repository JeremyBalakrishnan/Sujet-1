#include <stdio.h>
#include <stdlib.h>
#include <math.h>       // ne pas oublier le -lm pour compiler la bibliothèque maths
#include <time.h>
#include "structures.h"
#include "randomiser.h"




void randomiser(float tab[7918][8], int x, int y)
{
    int i,j,nb1,nb2;
    nb1 = x;
    nb2 = y;

    for(i = 0; i < nb1; i++)
    {
        for (j = 0; j < nb2; j++)
        {
            float tmp;
            int index = rand()%nb1;
            int index2 = rand()%nb2;
            tmp = tab[index][index2];
            tab[index][index2] = tab[nb1-1][nb2-1];
            tab[x-i-1][y-i-1] = tmp;
            nb1--;
            nb2--;
        }
        
    }
}
