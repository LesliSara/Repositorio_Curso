#include <stdio.h>
#include "operaciones.h"

int main() {
    char operador;
    float num1, num2, resultado;

    
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    printf("Ingrese la operacion (+, -, *, /): ");
    scanf(" %c", &operador);


    switch (operador) {
        case '+':
            resultado = suma(num1, num2);
            break;
        case '-':
            resultado = resta(num1, num2);
            break;
        case '*':
            resultado = multiplicacion(num1, num2);
            break;
        case '/':
            resultado = division(num1, num2);
            break;
        default:
            printf("Error: Operador no valido.\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0; 
}
