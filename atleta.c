#include <stdio.h>

// Definición de la estructura Atleta
struct Atleta {
    char deporte[50];
    char nombre[50];
    char pais[50];
    int num_medallas;
};

int main() {
    // Declaración de una variable de tipo Atleta
    struct Atleta atleta;

    // Solicitar al usuario que ingrese la información del atleta
    printf("Ingrese el deporte del atleta: ");
    scanf("%s", atleta.deporte);

    printf("Ingrese el nombre del atleta: ");
    scanf("%s", atleta.nombre);

    printf("Ingrese el país del atleta: ");
    scanf("%s", atleta.pais);

    printf("Ingrese el número de medallas del atleta: ");
    scanf("%d", &atleta.num_medallas);

    // Mostrar la información del atleta almacenada en la estructura
    printf("\nInformación del atleta:\n");
    printf("Deporte: %s\n", atleta.deporte);
    printf("Nombre: %s\n", atleta.nombre);
    printf("País: %s\n", atleta.pais);
    printf("Número de medallas: %d\n", atleta.num_medallas);

    return 0;
}
