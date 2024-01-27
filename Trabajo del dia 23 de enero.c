#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NFILA 10
#define NCOLU 10

int main(void) {
    int fil;
    int col;
    int fil_as;
    int col_as;
    int n_asteriscos;
    char matriz[NFILA][NCOLU];
    char palabra[] = "ANDRES";
    int seed;

    seed = time(0);
    srand(seed);

    // Inicializar la matriz con '0'
    for (fil = 0; fil < NFILA; fil++) {
        for (col = 0; col < NCOLU; col++) {
            matriz[fil][col] = '0';
        }
    }

    // Colocar la palabra "ANDRES" en la matriz
    for (n_asteriscos = 0; n_asteriscos < 6; n_asteriscos++) {
        fil_as = rand() % NFILA;
        col_as = rand() % NCOLU;

        if (matriz[fil_as][col_as] == '0') {
            matriz[fil_as][col_as] = palabra[n_asteriscos];
        } else {
            n_asteriscos--;
        }
    }

    // Imprimir la matriz resultante
    printf("\nMATRIZ GUARDADA:\n");
    for (fil = 0; fil < NFILA; fil++) {
        for (col = 0; col < NCOLU; col++) {
            printf(" %c", matriz[fil][col]);
        }
        printf("\n");
    }

    return 0;
}


