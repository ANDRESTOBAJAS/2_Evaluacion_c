//Vamos a ver cómo se hace una función
//Este programa pide tres números y devuelve el menor. sintax error

#include <stdio.h>

int devuelve_menor(int num1,int num2,int num3){
  int respuesta;
  if(num1<num2)
    if(num1<num3) respuesta=num1;
    else respuesta=num3;
  else
    if(num2<num3) respuesta=num2;
    else respuesta=num3;
  return(respuesta);
}


int main(void) {
  //Definimos las variables
  int num[3];
  int menor;
  int cont;
  //Pedimos los números
  for(cont=0;cont<=3;cont++){
    printf("\nDime el número %d: ",cont);
   
  }
 
  scanf("%d",&num[0]);//EL & lo explicaremos un poquito más adelante
  printf("\nDime otro número: ");
  scanf("%d",&num[1]);
  printf("\nDime otro número: ");
  scanf("%d",&num[2]);
  //Los enviamos a una función.La función nos devuelve el menor
  menor=devuelve_menor(num1,num2,num3);
  printf("\nEl menor es el número: %d",menor);//Explicaremos por qué no pongo & aquí
  return(0);
 
 
}
