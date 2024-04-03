/*
Hacer una función que reciba como parámetros un vector de enteros de 10
elementos y un número entero, y que devuelva verdadero si el número recibido
existe en el vector, o falso si no existe.
*/

#include <iostream>
#include <locale.h>
using namespace std;


void cargar_vector(int VNumeros[], int Cantidad);
bool Buscar_Numero(int VNumeros[], int Cantidad,  int Numero);



int main ()
{

    setlocale(LC_ALL, "spanish");



    int VectorNumeros[10] {};
    int tam=10, numero, respuesta;



    cargar_vector(VectorNumeros, tam);

    cout<<"Ingrese un numero para saber si el mismo esta en el vector: ";
    cin>>numero;

    respuesta=Buscar_Numero(VectorNumeros, tam, numero);

    if(respuesta==1)
    {
        cout<<"El numero esta en el vector."<<endl;
    }
    else
    {
        cout<<"El numero no se encuentra en el vector."<<endl;
    }



    return 0;
}

void cargar_vector(int VNumeros[], int Cantidad)
{
    int num;

    for(int i=0 ; i<Cantidad ; i++)
    {
        cout<<"Ingrese un numero: ";
        cin>>num;
        VNumeros[i]=num;
    }
}

bool Buscar_Numero(int VNumeros[], int Cantidad, int Numero)
{
    for(int i=0 ; i<Cantidad ; i++)
    {
        if(VNumeros[i]==Numero)
        {
            return 1;
        }
    }
    return 0;
}
