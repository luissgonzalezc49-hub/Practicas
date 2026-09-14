#include "funciones.c"
#include <stdio.h>


void pruebas_sumaRenglon();

int main()
{

    pruebas_sumaRenglon();

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


#include <stdio.h>

int main() {
    printf("¡Ya funciona!\n");
    return 0;
}