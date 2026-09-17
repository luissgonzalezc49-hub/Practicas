#include <stdio.h>

int sumarRenglon(int renglon[], int n)
{
    int suma = 0;
    for(int i = 0; i < n; i++)
    {
        suma += renglon[i];
    }
    return suma;
}

int sumarColumna(int cuadro[3][3], int columna)
{
    int suma = 0;
    for(int fila = 0; fila < 3; fila++)
    {
        suma += cuadro[fila][columna];
    }
    return suma;
}

int sumarDiagonal1(int cuadro[3][3])
{
    return cuadro[0][0] + cuadro[1][1] + cuadro[2][2];
}

int sumarDiagonal2(int cuadro[3][3])
{
    return cuadro[0][2] + cuadro[1][1] + cuadro[2][0];
}

int esCuadroMagico(int cuadro[3][3])
{
    int constante = sumarRenglon(cuadro[0], 3);

    // Verificar renglones
    for(int f = 1; f < 3; f++)
    {
        if(sumarRenglon(cuadro[f], 3) != constante)
        {
            printf("Renglón %d no suma %d\n", f+1, constante);
            return 0;
        }
    }

    // Verificar columnas
    for(int c = 0; c < 3; c++)
    {
        if(sumarColumna(cuadro, c) != constante)
        {
            printf("Columna %d suma %d no es %d\n", c+1, sumarColumna(cuadro, c), constante);
            return 0;
        }
    }

    // Verificar diagonales
    if(sumarDiagonal1(cuadro) != constante)
    {
        printf("Diagonal principal no suma %d\n", constante);
        return 0;
    }
    if(sumarDiagonal2(cuadro) != constante)
    {
        printf("Diagonal secundaria no suma %d\n", constante);
        return 0;
    }

    return constante;
}