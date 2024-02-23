int main(){
    int i,j;
    int matriz[3][3];

    // genera los numeros aleatorios
    srand(time(NULL));

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matriz[i][j]=rand()%10;
        }
    }

    // escribe la matriz 
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
