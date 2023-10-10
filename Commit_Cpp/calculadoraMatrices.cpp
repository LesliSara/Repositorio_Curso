#include <iostream>

void imprimir_matriz(float **matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matriz[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

void llenar_matriz(float **matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << "Ingresa el elemento (" << i + 1 << ", " << j + 1 << "): ";
            std::cin >> matriz[i][j];
        }
    }
}

void sumar_matrices(float **matriz1, float **matriz2, float **resultado, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void restar_matrices(float **matriz1, float **matriz2, float **resultado, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void multiplicar_matrices(float **matriz1, float **matriz2, float **resultado, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < n; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

int main(void) {
    int n;

    std::cout << "Ingresa el orden (nxn) de las matrices n: ";
    std::cin >> n;

    float **matriz1 = new float *[n];
    float **matriz2 = new float *[n];
    float **resultado = new float *[n];

    for (int i = 0; i < n; i++) {
        matriz1[i] = new float[n];
        matriz2[i] = new float[n];
        resultado[i] = new float[n];
    }

    std::cout << "Llenar la primera matriz:" << std::endl;
    llenar_matriz(matriz1, n);

    std::cout << "Llenar la segunda matriz:" << std::endl;
    llenar_matriz(matriz2, n);

    std::cout << "Matriz 1:" << std::endl;
    imprimir_matriz(matriz1, n);

    std::cout << "Matriz 2:" << std::endl;
    imprimir_matriz(matriz2, n);

    sumar_matrices(matriz1, matriz2, resultado, n);
    std::cout << "Suma de matrices:" << std::endl;
    imprimir_matriz(resultado, n);

    restar_matrices(matriz1, matriz2, resultado, n);
    std::cout << "Resta de matrices:" << std::endl;
    imprimir_matriz(resultado, n);

    multiplicar_matrices(matriz1, matriz2, resultado, n);
    std::cout << "Multiplicación de matrices:" << std::endl;
    imprimir_matriz(resultado, n);

    for (int i = 0; i < n; i++) {
        delete[] matriz1[i];
        delete[] matriz2[i];
        delete[] resultado[i];
    }
    delete[] matriz1;
    delete[] matriz2;
    delete[] resultado;

    return 0;
}
