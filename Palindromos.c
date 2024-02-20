#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int esPalindromo(const char *palabra) {
    int longitud = strlen(palabra);
    const char *inicio = palabra;
    const char *fin = palabra + longitud - 1;

    while (inicio < fin) {
        if (*inicio != *fin) {
            return 0;
        }
        inicio++;
        fin--;
    }
    return 1;
}

int main() {
    char *lista[2];
    char palabra[100];

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    lista[0] = (char *)malloc(strlen(palabra) + 1);
    strcpy(lista[0], palabra);

    int longitud = strlen(palabra);
    lista[1] = (char *)malloc(longitud + 1);
    for (int i = 0; i < longitud; i++) {
        lista[1][i] = palabra[longitud - i - 1];
    }
    lista[1][longitud] = '\0';

    printf("Palabra ingresada: %s\n", lista[0]);
    printf("Palabra invertida: %s\n", lista[1]);

    if (esPalindromo(lista[0])) {
        printf("La palabra es un palindromo.\n");
    } else {
        printf("La palabra ingresada no es un palindromo.\n");
    }

    free(lista[0]);
    free(lista[1]);

    return 0;
}
