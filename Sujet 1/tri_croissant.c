#include <stdio.h>
#include <stdlib.h>
#include <math.h>       // ne pas oublier le -lm pour compiler la bibliothèque maths
#include <time.h>
#include "structures.h"
#include "tri_croissant.h"

void tri_croissant(float tab[7918][8]){
    
    int i = 0;
    int j = 0;
    int tmp = 0;
    
    for(i=0; i<7918 ; i++)
    {
        for(int u=i; u<7918; u++)
        {
          for (j= 0; j < 8; j++)
          {
            for (int v = j; v < 8; v++)
            {
                if(tab[u][v]<tab[i][j]){

                    tmp = tab[i][j];
                    tab[i][j] = tab[u][v];
                    tab[u][v] = tmp;
                }
            }
            
          }
          
        }
    }
}