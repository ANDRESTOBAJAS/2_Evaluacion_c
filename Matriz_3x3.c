#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//HAZ UN PROGRAMA QUE RELLENE UNA MATRIZ 3X3 DE 1 Y 0 AL AZAR
//¡pista! Utiliza 2 bucles de tipo for

int main(void) {
  int fil;
  int col;
  int numeros[3][3];
  for(fil=0;fil<3;fil++){
    for(col=0;col<3;col++){
      printf("\nIntroduzca el elemento %d,%d: ",fil,col);
      scanf(" %d",&numeros[fil][col]);
    }
  }
  printf("\nMATRIZ GUARDADA:");
  for(fil=0;fil<3;fil++){
    printf("\n");
    for(col=0;col<3;col++){
      printf(" %d",numeros[fil][col]);

    }
  }
  return 0;
}
