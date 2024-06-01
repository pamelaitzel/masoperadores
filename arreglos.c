#include <stdio.h>

int main() {
    int arreglo[20];
    int i;
    double promedio = 0;
    long long multiplicacion = 1;
    printf("Ingresa los valores para los 20 elementos del arreglo:\n");
    for (i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    for (i = 0; i < 20; i++) {
        promedio += arreglo[i];
    }
    promedio /= 20;
    for (i = 0; i < 20; i++) {
        multiplicacion *= arreglo[i];
    }
    printf("El promedio de los elementos es: %.2lf\n", promedio);
    printf("La multiplicación de los elementos es: %lld\n", multiplicacion);

    return 0;
}