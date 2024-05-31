#include <stdio.h>
#include <string.h>

// Definición de la estructura Atleta
struct Atleta {
    char deporte[50];
    char nombre[50];
    char pais[50];
    int num_medallas;
};

int main() {
    // Declaración de un arreglo de 10 atletas
    struct Atleta atletas[10];
    int i;

    // Solicitar al usuario que ingrese la información de los atletas
    for (i = 0; i < 10; i++) {
        printf("Ingrese el deporte del atleta %d: ", i + 1);
        scanf("%s", atletas[i].deporte);

        printf("Ingrese el nombre del atleta %d: ", i + 1);
        scanf("%s", atletas[i].nombre);

        printf("Ingrese el país del atleta %d: ", i + 1);
        scanf("%s", atletas[i].pais);

        printf("Ingrese el número de medallas del atleta %d: ", i + 1);
        scanf("%d", &atletas[i].num_medallas);
    }

    // Encontrar el atleta con mayor número de medallas
    int max_medallas = atletas[0].num_medallas;
    int indice_max_medallas = 0;
    for (i = 1; i < 10; i++) {
        if (atletas[i].num_medallas > max_medallas) {
            max_medallas = atletas[i].num_medallas;
            indice_max_medallas = i;
        }
    }

    // Mostrar la información del atleta con mayor número de medallas
    printf("\nAtleta con mayor número de medallas:\n");
    printf("Deporte: %s\n", atletas[indice_max_medallas].deporte);
    printf("Nombre: %s\n", atletas[indice_max_medallas].nombre);
    printf("País: %s\n", atletas[indice_max_medallas].pais);
    printf("Número de medallas: %d\n", atletas[indice_max_medallas].num_medallas);

    return 0;
}
