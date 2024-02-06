tud=strlen(aux);//Cuento las letras del nombre
      reyes[cont]=(char *) malloc(sizeof(char)*longitud);//Reservo memoria para el nombre, justo el tamaño de meoria que va a ocupar
      strcpy(*(reyes+cont),aux);//Copio letra a letra el nombre desde aux hasta el sitio de meoria reservado
      printf("\n He copiado %s",*(reyes+cont));//Muestro el nombre desde su nueva ubicación
  }
  //Los ordenamos por orden alfabético
for(veces=1;veces)
for(cont=0;cont<=2;cont++){
  if(*(reyes+cont)>*(reyes+cont+1)){
      letraaux=*(reyes+cont);
      *(reyes+cont)=*(reyes+cont+1);
      *(reyes+cont+1)=letraaux;
  }
}
 
  return 0;
}
