#include <stdio.h>
#include <string.h>

// Definición de la estructura Empleado
struct Empleado {
    char nombre[50];
    char sexo;
    float sueldo;
};

int main() {
    // Declaración de un arreglo de 5 empleados
    struct Empleado empleados[5];
    int i;

    // Solicitar al usuario que ingrese la información de los empleados
    for (i = 0; i < 5; i++) {
        printf("Ingrese el nombre del empleado %d: ", i + 1);
        scanf("%s", empleados[i].nombre);

        printf("Ingrese el sexo del empleado %d (M/F): ", i + 1);
        scanf(" %c", &empleados[i].sexo);

        printf("Ingrese el sueldo del empleado %d: ", i + 1);
        scanf("%f", &empleados[i].sueldo);
    }

    // Encontrar el empleado de menor sueldo
    float menor_sueldo = empleados[0].sueldo;
    int indice_menor_sueldo = 0;
    for (i = 1; i < 5; i++) {
        if (empleados[i].sueldo < menor_sueldo) {
            menor_sueldo = empleados[i].sueldo;
            indice_menor_sueldo = i;
        }
    }

    // Mostrar la información del empleado con menor sueldo
    printf("\nEmpleado con menor sueldo:\n");
    printf("Nombre: %s\n", empleados[indice_menor_sueldo].nombre);
    printf("Sexo: %c\n", empleados[indice_menor_sueldo].sexo);
    printf("Sueldo: %.2f\n", empleados[indice_menor_sueldo].sueldo);

    return 0;
}
