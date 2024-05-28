#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &x);
    
    // Crear el arreglo usando malloc
    int *arreglo = (int *)malloc(x * sizeof(int));
    
    // Comprobar si malloc pudo asignar memoria correctamente
    if (arreglo == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }
    
    // Llenar el arreglo con datos ingresados por el usuario
    printf("Ingresa los elementos del arreglo:\n");
    for (int i = 0; i < x; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", arreglo + i);
    }
    
    // Mostrar los valores del arreglo
    printf("Los valores del arreglo son:\n");
    for (int i = 0; i < x; i++) {
        printf("%d ", *(arreglo + i));
    }
    printf("\n");
    
    // Liberar la memoria asignada
    free(arreglo);
    
    return 0;
}
