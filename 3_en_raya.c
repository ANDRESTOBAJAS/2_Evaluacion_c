#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int verificadora(char **matriz){
  int respuesta=0;

  return respuesta;
}
int main(void) {
  //Definimos las variables
  char *matriz[3];
  int fil,col;
  int seed;
  int dado;
  seed=time(0);
  srand(seed);
  //Reservamos memoria y rellenamos la matriz de O y X
  for(fil=0;fil<3;fil++){
    matriz[fil]=(char *) malloc(3*sizeof(char));
    for(col=0;col<3;col++){
      dado=rand()%2;
      if(dado==0){
        *(*(matriz+fil) +col)='O';
      }#include <stdio.h>#include <stdlib.h>
#include <time.h>
int verificadora(char **matriz){
  int respuesta=0;

  return respuesta;
}
int main(void) {
  //Definimos las variables
  char *matriz[3];
  int fil,col;
  int seed;
  int dado;
  seed=time(0);
  srand(seed);
  //Reservamos memoria y rellenamos la matriz de O y X
  for(fil=0;fil<3;fil++){
    matriz[fil]=(char *) malloc(3*sizeof(char));
    for(col=0;col<3;col++){
      dado=rand()%2;
      if(dado==0){
        *(*(matriz+fil) +col)='O';
      }
      else{
        *(*(matriz+fil) +col)='X';
      }
    }
  }
  //MOSTRAMOS LA MATRIZ
  for(fil=0;fil<3;fil++){
    printf("\n");
    for(col=0;col<3;col++){
      printf(" %c",*(*(matriz+fil) +col));
    }
  }
  //Hacemos una función que verifique si hay tres en raya
  if(verificadora(matriz)==1)
    printf("\n Han ganado las O");
  if(verificadora(matriz)==-1)
    printf("\n Han ganado las X");
  if(verificadora(matriz)!=1 && verificadora(matriz)!=-1)
    printf("\nNo hay 3 en raya todavía");
  if(verificadora(matriz)==2)
    printf("\n Lucky man! Han ganado los dos");
   

 
  return 0;
}
