/*
Construya un programa para hallar, de un conjunto de N números, 
qué porcentaje son cero, qué porcentaje son positivos y el 
porcentaje de números negativos.
*/


#include <stdio.h>

int main() {
    int n, num, ceros = 0, pos = 0, neg = 0;
    float porc_ceros, porc_pos, porc_neg;

    // Pedimos al usuario que ingrese la cantidad de números a evaluar
    printf("Ingrese la cantidad de numeros a evaluar: ");
    scanf("%d", &n);

    // Pedimos al usuario que ingrese los N números
    printf("Ingrese los %d numeros:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("Número %d: ", i);
        scanf("%d", &num);

        // Verificamos si el número es cero, positivo o negativo y lo contabilizamos
        if (num == 0) {
            ceros++;
        } else if (num > 0) {
            pos++;
        } else {
            neg++;
        }
    }

    // Calculamos los porcentajes de ceros, positivos y negativos
    porc_ceros = ((float)ceros / n) * 100;
    porc_pos = ((float)pos / n) * 100;
    porc_neg = ((float)neg / n) * 100;

    // Mostramos los resultados al usuario
    printf("\nResultados:\n");
    printf("Porcentaje de numeros cero: %.2f%%\n", porc_ceros);
    printf("Porcentaje de numeros positivos: %.2f%%\n", porc_pos);
    printf("Porcentaje de numeros negativos: %.2f%%\n", porc_neg);

    return 0;
}

