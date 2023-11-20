#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5, sum;

    printf("Ingrese cinco numeros:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    scanf("%d", &num5);

    sum = num1 + num2 + num3 + num4 + num5;

    printf("La suma de los cinco numeros es: %d\n", sum);

    return 0;
}
