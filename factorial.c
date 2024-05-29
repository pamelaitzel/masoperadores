#include <stdio.h>

// Definición de la función factorial recursiva
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Caso base: factorial de 0 o 1 es 1
    } else {
        return n * factorial(n - 1); // Llamada recursiva
    }
}

int main() {
    int numero;
    unsigned long long resultado;

    // Solicitar al usuario ingresar el número
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &numero);

    // Verificar si el número es negativo
    if (numero < 0) {
        printf("El factorial de un número negativo no está definido.\n");
    } else {
        // Calcular el factorial llamando a la función factorial
        resultado = factorial(numero);
        printf("El factorial de %d es %llu.\n", numero, resultado);
    }

    return 0;
}
