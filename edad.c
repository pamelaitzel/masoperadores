#include <stdio.h>
#include <stdlib.h>

void calcularEdad(int *anios, int *meses, int *dias, int *edad_anios, int *edad_meses, int *edad_dias) {
    // Verificar si la diferencia de días es negativa
    if (*dias < *edad_dias) {
        *meses -= 1;
        *dias += 30; // Suponiendo que cada mes tiene 30 días
    }
    // Verificar si la diferencia de meses es negativa
    if (*meses < *edad_meses) {
        *anios -= 1;
        *meses += 12;
    }

    *edad_anios = *anios - *edad_anios;
    *edad_meses = *meses - *edad_meses;
    *edad_dias = *dias - *edad_dias;
}

int main() {
    int anios_actuales, meses_actuales, dias_actuales;
    int anios_nacimiento, meses_nacimiento, dias_nacimiento;
    int edad_anios = 0, edad_meses = 0, edad_dias = 0;

    printf("Ingrese la fecha de nacimiento (años meses días): ");
    scanf("%d %d %d", &anios_nacimiento, &meses_nacimiento, &dias_nacimiento);

    printf("Ingrese la fecha actual (años meses días): ");
    scanf("%d %d %d", &anios_actuales, &meses_actuales, &dias_actuales);

    calcularEdad(&anios_actuales, &meses_actuales, &dias_actuales, &anios_nacimiento, &meses_nacimiento, &dias_nacimiento);

    printf("La edad es: %d años, %d meses y %d días\n", edad_anios, edad_meses, edad_dias);

    return 0;
}
