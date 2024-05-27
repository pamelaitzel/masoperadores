#include <stdio.h>

int main() {
    FILE *archivo;
    char nombre[50];
    int edad;

    archivo = fopen("datos.txt", "a+");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    fprintf(archivo, "Nombre: %s, Edad: %d\n", nombre, edad);

    rewind(archivo);

    printf("Contenido del archivo:\n");
    while (fscanf(archivo, "Nombre: %s, Edad: %d", nombre, &edad) != EOF) {
        printf("Nombre: %s, Edad: %d\n", nombre, edad);
    }

    fclose(archivo);

    return 0;
}
