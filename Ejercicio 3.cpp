/*
Hacer una función que reciba como parámetros un vector de enteros y un
número entero que indica la cantidad de componentes del vector, y que devuelva
la posición que ocupa el valor mínimo contenido en ese vector.
*/

#include <iostream>
using namespace std;

void Cargar_Vector(int VEnteros[], int Cantidad);
int posicion_minimo(int VEnteros[], int Cantidad);


int main()
{

    int VectorN[10] {};
    int Tam=10, Numero, Posicion;

    cout<<"A continuacion esta a punto de cargar "<<Tam<<" numeros."<<endl;


    Cargar_Vector(VectorN, Tam);
    Posicion=posicion_minimo(VectorN, Tam);

    cout<<"La posicion del numero minimo es la: "<<Posicion+1<<endl;






    return 0;
}

void Cargar_Vector(int VEnteros[], int Cantidad)
{
    int numero;

    for(int i=0 ; i<Cantidad ; i++)
    {
        cout<<"Ingrese un numero: ";
        cin>>numero;
        VEnteros[i]=numero;
    }
}

int posicion_minimo(int VEnteros[], int Cantidad)
{
    int minimo, posicion_minima;
    bool pos_min=false;

    for(int i=0 ; i<Cantidad ; i++)
    {
        if(pos_min==false)
        {
            minimo=VEnteros[0];
            posicion_minima=i;
            pos_min=true;
        }
        else
        {
            if(VEnteros[i]<minimo)
            {
                minimo=VEnteros[i];
                posicion_minima=i;
            }
        }
    }

    return posicion_minima;
}
