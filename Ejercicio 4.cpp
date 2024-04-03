/*
Hacer una funci�n que reciba como par�metros un vector de enteros y un
n�mero entero que indica la cantidad de componentes del vector, y que devuelva
la posici�n que ocupa el valor m�ximo contenido en ese vector
*/

#include <iostream>
using namespace std;


void Cargar_Vector(int VEnteros[] , int Cantidad);
int  Posicion_Mayor (int VEnteros [] , int Cantidad);




int main()
{

  int Vnum[10]{};
  int Tam=10, posicion;

  Cargar_Vector(Vnum , Tam);
  posicion=Posicion_Mayor(Vnum , Tam);

  cout<<"Posicion del mayor valor del vector: "<<posicion+1<<endl;








    return 0;
}



void Cargar_Vector(int VEnteros[] , int Cantidad)
{
    int numero;

    for(int i=0 ; i<Cantidad ; i++)
    {
          cout<<"Ingrese un numero: ";
          cin>>numero;
          VEnteros[i]=numero;
    }
}

int  Posicion_Mayor (int VEnteros[] , int Cantidad)
{
      int posicion_mayor , mayor;
      bool pos_mayor=false;

      for(int j=0 ; j<Cantidad ; j++)
      {
            if(pos_mayor==false)
            {
                  posicion_mayor=0;
                  mayor=VEnteros[0];
                  pos_mayor=true;
            }
            else
            {
                  if(VEnteros[j]>mayor)
                  {
                        mayor=VEnteros[j];
                        posicion_mayor=j;
                  }
            }
      }
      return posicion_mayor;
}
