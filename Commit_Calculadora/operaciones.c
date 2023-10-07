#include <stdio.h>
#include "operaciones.h"

float suma(float num1, float num2) {
    return num1 + num2;
}

float resta(float num1, float num2) {
    return num1 - num2;
}

float multiplicacion(float num1, float num2) {
    return num1 * num2;
}

float division(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: No se puede dividir por cero\n");
        return 0;
    }
}
