#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NFILA 25
#define NCOLU 25

int main(void) {
    int fil;
    int col;
    char numeros[NFILA][NCOLU];
    int seed; // Semilla para inicializar el generador de números al azar
    seed = time(0); // Cargamos la semilla con el tiempo transcurrido
    srand(seed);    // Inicializamos el generador de números aleatorios

    // Inicializar la matriz con ceros
    for (fil = 0; fil < NFILA; fil++) {
        for (col = 0; col < NCOLU; col++) {
            numeros[fil][col] = '0';
        }
    }

    // Colocar un asterisco aleatoriamente en la matriz
    int fil_asterisco = rand() % NFILA;
    int col_asterisco = rand() % NCOLU;
    numeros[fil_asterisco][col_asterisco] = '*';

    // Imprimir la matriz
    printf("\nMATRIZ GUARDADA:\n");
    for (fil = 0; fil < NFILA; fil++) {
        for (col = 0; col < NCOLU; col++) {
            printf(" %c", numeros[fil][col]);
        }
        printf("\n");
    }

    return 0;
}
