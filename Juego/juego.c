#include "funciones.c"
#include <stdio.h>

// === LLENAR MATRIZ DESDE TECLADO ===
void llenarMatriz(int matriz[5][5], int tam) {
    printf("\n Ingresa los %d números de la matriz %dx%d:\n", tam*tam, tam, tam);
    for (int f = 0; f < tam; f++) {
        printf("  Fila %d: ", f+1);
        for (int c = 0; c < tam; c++) {
            scanf("%d", &matriz[f][c]);
        }
    }
}

// === MOSTRAR MATRIZ EN PANTALLA ===
void mostrarMatriz(int matriz[5][5], int tam) {
    printf("\nTu matriz:\n");
    for (int f = 0; f < tam; f++) {
        printf("  ");
        for (int c = 0; c < tam; c++) {
            printf("%2d ", matriz[f][c]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[5][5];
    int tam;

    printf("===== CUADRO MÁGICO =====\n");
    printf("Elige el tamaño del cuadro:\n");
    printf("  1. 3 x 3\n");
    printf("  2. 5 x 5\n");
    printf("Ingresa tu opción: ");
    scanf("%d", &tam);

    if (tam == 1) tam = 3;
    else if (tam == 2) tam = 5;
    else {
        printf("Opción no válida\n");
        return 1;
    }

    llenarMatriz(matriz, tam);
    mostrarMatriz(matriz, tam);

    int resultado = esCuadroMagico(matriz, tam);

    printf("\n================================\n");
    if (resultado != 0) {
        printf("ES UN CUADRO MÁGICO Constante = %d\n", resultado);
    } else {
        printf(" NO es un cuadro mágico\n");
    }
    printf("================================\n");

    return 0;
}