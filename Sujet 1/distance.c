#include <stdio.h>
#include <stdlib.h>
#include <math.h>    
#include "structures.h"
#include "distance.h"

// distance euclidienne
float distance(Logement x, float tab[7918][8]){
  float temp = 0;
  for(int i = 0; i < 7918; i++){
    for (int j = 0; j < 8; j++)
    {
      temp += pow(x.price - tab[i][j], 2.0);
    }
    
  }
  float resultat = sqrt(temp);
  printf("La distance de similarité du logement x avec chaque logements du fichier par rapport au prix est de %f.\n", resultat);
}
