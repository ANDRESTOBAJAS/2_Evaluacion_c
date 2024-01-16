#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NFILA 25
#define NCOLU 25
//HAZ UN PROGRAMA QUE RELLENE UNA MATRIZ 3X3 DE 1 Y 0 AL AZAR
//¡pista! Utiliza 2 bucles de tipo for

int main(void) {
  int fil;
  int col;
  int fil_as;
  int col_as;
  char numeros[NFILA][NCOLU];
  int seed;//Semilla para inicializar el generador de números al azar
  seed=time(0);//Cargamos la semilla con el tiempo transcurrido
  srand(seed);//Inicializamos el generador de números
  fil_as=rand()%NFILA;
  col_as=rand()%NCOLU;
  for(fil=0;fil<NFILA;fil++){
    for(col=0;col<NCOLU;col++){
      //printf("\nIntroduzca el elemento %d,%d: ",fil,col);
      numeros[fil][col]='*';//Relleno la posicion fil, col de la matriz con un 0
      //scanf(" %d",&numeros[fil][col]);
    }
  }
  numeros[fil_as][col_as]='*';
  printf("\nMATRIZ GUARDADA:");
  for(fil=0;fil<NFILA;fil++){
    printf("\n");
    for(col=0;col<NCOLU;col++){
      printf(" %c",numeros[fil][col]);

    }
  }
  return 0;
}
