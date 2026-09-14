int sumarRenglon(int renglon[],int n)
{
    int suma = 0;
    for(int i = 0; i < n; i++)
    {
        suma = suma + renglon[i];
    }

    return suma;
}