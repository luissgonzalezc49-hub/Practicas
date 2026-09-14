int sumarRenglon(int renglon[],int n)
{
    int suma = 0; //empieza en 0
    for(int i = 0; i < n; i++) // recorre cada numero del renglon
    {
        suma = suma + renglon[i]; //va sumando uno por uno 
    }

    return suma;
}