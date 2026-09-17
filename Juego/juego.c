#include "funciones.c"
#include <stdio.h>

int main()
{
    // Ejemplo de la tarea
    int cuadro1[3][3] = {
        {9, 1, 5},
        {7, 5, 3},
        {4, 9, 2}
    };

    // Cuadro mágico real
    int cuadro2[3][3] = {
        {8, 1, 6},
        {3, 5, 7},
        {4, 9, 2}
    };

    printf("=== VERIFICAR CUADRO MÁGICO ===\n\n");

    // Prueba 1: ejemplo de la tarea
    printf("→ Probando cuadro 1:\n");
    int res1 = esCuadroMagico(cuadro1);
    if(res1 != 0)
        printf(" ES CUADRO MÁGICO! Constante = %d\n", res1);
    else
        printf(" NO es cuadro mágico\n");

    printf("\n→ Probando cuadro 2:\n");
    int res2 = esCuadroMagico(cuadro2);
    if(res2 != 0)
        printf(" ES CUADRO MÁGICO! Constante = %d\n", res2);
    else
        printf("NO es cuadro mágico\n");

    return 0;
}