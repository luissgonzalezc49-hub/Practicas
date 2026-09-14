#include "funciones.c"
#include <stdio.h>

int sumarRenglon(int renglon [],int n);

void pruebas_sumaRenglon();

int main()
{

    pruebas_sumaRenglon();

    return 0;
}
    
void pruebas_sumaRenglon()
{

    int cuadro [3][3] = {
        {2,8,7},
        {6,5,1},
        {4,9,3}
     };

    printf("prueba funcion con entrada 10");
    printf("suma de primer renglon:%d,",sumarRenglon(cuadro[0],3));

}


#include <stdio.h>

int main() {
    printf("¡Hola bb! 🎉 ¡Ya funciona!\n");
    return 0;
}