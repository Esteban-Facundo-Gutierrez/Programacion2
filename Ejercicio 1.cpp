/*
Hacer una función que reciba como parámetros un vector de enteros y un
número entero que indica la cantidad de componentes del vector, y que devuelva
el valor mínimo contenido en ese vector.
*/

#include <iostream>
using namespace std;


void cargar_vector(int Vnumeros[], int Cantidad);
int valor_minimo(int Vnumeros [], int Cantidad);

int main()
{

    int Vnumeros[10] {};
    int cantidad=10, minimo;


    cargar_vector(Vnumeros,cantidad);
    minimo=valor_minimo(Vnumeros,cantidad);

    cout<<"El minimo valor del vector es: "<<minimo<<endl;

    return 0;
}

void cargar_vector(int Vnumeros[], int Cantidad)
{
    int numero;
    for(int i=0 ; i<Cantidad ; i++)
    {
        cout<<"Ingrese un numero: ";
        cin>>numero;
        Vnumeros[i]=numero;
    }
}

int valor_minimo(int Vnumeros [], int Cantidad)
{
    int minimo;

    minimo=Vnumeros[0];
    for(int j=0 ; j<Cantidad ; j++)
    {
        if(Vnumeros[j]<minimo)
        {
            minimo=Vnumeros[j];
        }
    }

    return minimo;
}

