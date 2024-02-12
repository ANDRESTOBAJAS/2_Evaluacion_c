#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NPALABRAS 10

void intercambiar(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    char *palabras[NPALABRAS];

    char palabra[50];

    printf("Introduce 10 palabras:\n");
    for (int i = 0; i < NPALABRAS; i++) {
        printf("Palabra %d: ", i + 1);
        scanf("%s", palabra);
        palabras[i] = (char *)malloc(strlen(palabra) + 1); 
        strcpy(palabras[i], palabra);
    }

    for (int i = 0; i < NPALABRAS - 1; i++) {
        for (int j = 0; j < NPALABRAS - i - 1; j++) {
            if (strlen(palabras[j]) > strlen(palabras[j + 1])) {
                intercambiar(&palabras[j], &palabras[j + 1]);
            }
        }
    }

    printf("\nLista de palabras ordenadas por longitud de menor a mayor:\n");
    for (int i = 0; i < NPALABRAS; i++) {
        printf("%s\n", palabras[i]);
        free(palabras[i]); 
    }

    return 0;
}
