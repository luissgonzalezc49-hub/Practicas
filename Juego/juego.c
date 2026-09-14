#include "funciones.c"
#include <stdio.h>


void pruebas_sumaRenglon();
void pruebas_sumaColumna();

int main()
{

    pruebas_sumaRenglon();
    pruebas_sumaColumna();

    return 0;
}
    
void pruebas_sumaRenglon()
{

    int cuadro [3][3] = {  //una tabla 3x3
        {2,8,7},
        {6,5,1},
        {4,9,3}
     };

    printf("prueba funcion con entrada 10");
    printf("suma de primer renglon:%d,",sumarRenglon(cuadro[0],3));//suma la primera fila : 2+8+7= 17

}

void pruebas_sumaColumna()
{
int cuadrado [3][3] = {
        {2,8,7},
        {6,5,1},
        {4,9,3}

};
    printf("suma de columnas  : %d\n", sumarColumna(cuadro,0));
    return 0;
}