#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//HAZ UN PROGRAMA QUE RELLENE UNA MATRIZ 3X3 DE 1 Y 0 AL AZAR
//¡pista! Utiliza 2 bucles de tipo for

int main(void) {
  int fil;
  int col;
  int numeros[3][3];
  int seed;//Semilla para inicializar el generador de números al azar
  seed=time(0);//Cargamos la semilla con el tiempo transcurrido
  srand(seed);//Inicializamos el generador de números aleatorios
  for(fil=0;fil<3;fil++){
    for(col=0;col<3;col++){
      //printf("\nIntroduzca el elemento %d,%d: ",fil,col);
      numeros[fil][col]=rand()%2;//Relleno la posicion fil, col de la matriz con un número generado al azar entre 0 y 1
      //scanf(" %d",&numeros[fil][col]);
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
