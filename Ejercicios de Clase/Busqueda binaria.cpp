#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h> 


//comentario
using namespace std;
int main()
{
    int n, temp, L, R,m,T;
    n=0;
    cout << "Indique el numero de datos en el vector: ";
    cin >> n;
// generar los valores de las matrices con números aleatorios
    double aleat;
    int vector[n];
    srand (time(0));
    //generar vector
for (int i=0; i < n; i++)
{
    aleat=rand() % 100;
    vector[i]=aleat;
     
}
   //ordenar vector 
for (int i=0; i < n; i++)
{
    for(int j=0; j < n; j++)
    {
        if (vector[j] > vector[j+1])
        {
            temp= vector[j];
            vector[j]=vector[j+1];
            vector[j+1] = temp;
        }

    }
}
for(int i=0; i < n; i++)
{
    cout <<vector[i] << ",";
}
cout << endl;
//buscar en un vector muy largo algun dato podemos dividir en dos la busqueda para encontrarlos mas rapido.

L=0;
R=n-1;
cout << "Que numero desea buscar? : ";
cin >> T;

m=0;

    while (vector[m]!= T)
    {
        m=floor((L+R)/2);
        if (L>R)
       {
        cout << "No se encontro el numero en el vector";
        break;
       }
  
        else if (vector[m] < T)
       {
        L=m+1;
       }
        else if (vector[m] > T)
       {
        R=m-1;
       }

       else if ( vector[m] = T)
        {
            cout<<"El numero se encuentra en la posicion: " << m;
            break;
        }
    //Si de casualidad m=0
      while (vector[m]=T) 
      {
        cout<<"El numero se encuentra en la posicion: " << m;
      }
       
       
    }
    

    

}