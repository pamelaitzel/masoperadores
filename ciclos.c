#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;

    // Iniciar el temporizador
    start = clock();

    // Abrir el editor de texto (puedes cambiar "gedit" por el editor que desees)
    system("gedit");

    // Detener el temporizador
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    // Mostrar el tiempo de CPU utilizado
    printf("Tiempo de CPU utilizado: %f segundos\n", cpu_time_used);

    return 0;
}
