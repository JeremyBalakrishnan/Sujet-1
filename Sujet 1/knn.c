#include <stdio.h>
#include <stdlib.h>
#include <math.h>    
#include "structures.h"
#include "knn.h"

// Sélection des k premiers logements pour le calcul de la moyenne
float knn(float tab[7918][8], int k){

  float somme = 0;
  float moyenne;

  for (int i = 0; i < k ; i++)
  {
    for (int j = 0; j < k ; j++)
    {
      //nb = fgetc(fic);
      //tab[i][j] = nb;
      somme += tab[i][j];
    
    }
  }
  moyenne = (float)somme / (float)k;
  printf("La moyenne des prix est de %f.\n", moyenne);
  return 0;

}