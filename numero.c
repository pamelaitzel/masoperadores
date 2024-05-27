#include <stdio.h>

int main() {
    FILE *archivo;
    int numero;

    archivo = fopen("numeros.bin", "rb");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    printf("Contenido del archivo binario:\n");
    while (fread(&numero, sizeof(int), 1, archivo)) {
        printf("%d\n", numero);
    }

    fclose(archivo);

    return 0;
}
