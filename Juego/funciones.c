#include <stdio.h>

// === CÁLCULO DE CONSTANTE MÁGICA ===
// Fórmula: constante = [n * (n² + 1)] / 2
int calcularConstanteMagica(int n) {
    return (n * (n * n + 1)) / 2;
}

// === SUMAR UN RENGLÓN ===
int sumarRenglon(int matriz[5][5], int tam, int fila) {
    int suma = 0;
    for (int c = 0; c < tam; c++) {
        suma += matriz[fila][c];
    }
    return suma;
}

// === SUMAR UNA COLUMNA ===
int sumarColumna(int matriz[5][5], int tam, int col) {
    int suma = 0;
    for (int f = 0; f < tam; f++) {
        suma += matriz[f][col];
    }
    return suma;
}

// === SUMAR DIAGONAL PRINCIPAL ===
int sumarDiagonal1(int matriz[5][5], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += matriz[i][i];
    }
    return suma;
}

// === SUMAR DIAGONAL SECUNDARIA ===
int sumarDiagonal2(int matriz[5][5], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += matriz[i][tam - 1 - i];
    }
    return suma;
}

// === VERIFICAR QUE NO HAYA NÚMEROS REPETIDOS ===
int sinRepetir(int matriz[5][5], int tam) {
    int maximo = tam * tam;
    int vistos[26] = {0}; // para 5x5 máximo 25 números

    for (int f = 0; f < tam; f++) {
        for (int c = 0; c < tam; c++) {
            int num = matriz[f][c];
            if (num < 1 || num > maximo) return 0; // número fuera de rango
            if (vistos[num] == 1) return 0; // repetido 
            vistos[num] = 1;
        }
    }
    return 1; // todos únicos 
}

// === FUNCIÓN PRINCIPAL: VALIDAR CUADRO MÁGICO ===
int esCuadroMagico(int matriz[5][5], int tam) {
    int constante = calcularConstanteMagica(tam);
    int esMagico = 1;

    printf("\nConstante mágica esperada: %d\n", constante);

    // Verificar renglones
    printf("\nVerificando renglones...\n");
    for (int f = 0; f < tam; f++) {
        int suma = sumarRenglon(matriz, tam, f);
        if (suma != constante) {
            printf(" Renglón %d: suma %d (debería ser %d)\n", f+1, suma, constante);
            esMagico = 0;
        } else {
            printf("Renglón %d: %d\n", f+1, suma);
        }
    }

    // Verificar columnas
    printf("\nVerificando columnas...\n");
    for (int c = 0; c < tam; c++) {
        int suma = sumarColumna(matriz, tam, c);
        if (suma != constante) {
            printf("  Columna %d: suma %d (debería ser %d)\n", c+1, suma, constante);
            esMagico = 0;
        } else {
            printf("Columna %d: %d\n", c+1, suma);
        }
    }

    // Verificar diagonales
    printf("\n Verificando diagonales...\n");
    int d1 = sumarDiagonal1(matriz, tam);
    if (d1 != constante) {
        printf("Diagonal principal: %d\n", d1);
        esMagico = 0;
    } else {
        printf(" Diagonal principal: %d\n", d1);
    }

    int d2 = sumarDiagonal2(matriz, tam);
    if (d2 != constante) {
        printf(" Diagonal secundaria: %d\n", d2);
        esMagico = 0;
    } else {
        printf(" Diagonal secundaria: %d\n", d2);
    }

    // Verificar sin repeticiones
    printf("\nVerificando que no se repitan números...\n");
    if (!sinRepetir(matriz, tam)) {
        printf("  Hay números repetidos o fuera de rango\n");
        esMagico = 0;
    } else {
        printf(" Todos los números son únicos\n");
    }

    return esMagico ? constante : 0;
}