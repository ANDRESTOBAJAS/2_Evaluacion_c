/*Programa que calcula los número primos*/
//Un número es primo cuando solo es divisible
//para 1 y para si mismo. Utilice una función
#include <stdio.h>

int es_primo(int num){
    int respuesta=1;
    int cont;
    for(cont=num-1;cont>1;cont--){
      if(num%cont==0){
        respuesta=0;
      }
    }
    return(respuesta);
}

int main(void) {
  int num;
  int cont;
  //Leo un número
  printf("Introduzca un número: ");
  scanf(" %d",&num);
  //Pruebo a dividirlo por todos los número estrictamente
  //menores que él mismo.->Usaremos un bucle inverso
  for(cont=num-1;cont>1;cont--){
    //Probamos si num es divisible cont
    if(num%cont==0 && es_primo(cont)==1){
      printf(" %d",cont);
      num=num/cont;
      if(num%cont==0){
        cont++;
      }
    }
  }
 
  return 0;
}
