///Programacion 2
///Ejercicio N°2

/* Hacer una función que reciba como parámetros un vector de enteros y un
número entero que indica la cantidad de componentes del vector, y que devuelva
el valor máximo contenido en ese vector.
*/

#include <iostream>
using namespace std;

void cargar_Vector(int VEnteros[], int Cantidad);
int buscar_mayor( int VEnteros[] , int Cantidad);




int main()
{

    int VNumeros[10] {};
    int Tam=10, NumeroMayor ;

    cout<<"A continuacion ingresara 10 numeros: "<<endl;

    cargar_Vector(VNumeros, Tam);
    NumeroMayor=buscar_mayor(VNumeros , Tam);

    cout<<"El mayor de todos los numeros del vector es: "<<NumeroMayor<<endl;

    return 0;
}


void cargar_Vector(int VEnteros[], int Cantidad)
{
    int Numero;

    for(int i=0 ; i<Cantidad ; i++)
    {
        cin>>Numero;
        VEnteros[i]=Numero;
    }
}

int buscar_mayor( int VEnteros[] , int Cantidad)
{
      int mayor;

      mayor=VEnteros[0];

    for(int i=0 ; i<Cantidad ; i++)
    {
        if(VEnteros[i]>mayor)
        {
              mayor=VEnteros[i];
        }
    }
    return mayor;
}
