#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h> 

using namespace std;
int main()
{
    int cases,n,ent,k;
    cases=0;
    cout << "Indique el numero de casos prueba :";
    cin >> cases;
//generar casos prueba
    float nm[cases];
    float ft,temp;
    int result[cases];
     for (int i=0; i<cases; i++)
    {
        cout << "Caso de prueba " << i << ": ";
        cin >> n;
        nm[i]= n;
        //le saco raiz la igualo a un float y luego lo igualo a un entero
        ft = sqrt(nm[i]);
        ent = ft;
        // si la resta queda 0 es porque ese numero ya es un cuadrado perfecto
        // si queda un decimal, entonces multiplicamos el caso de prueba por un iterador
            k=1;
            while (ft-ent!=0)
            {

                k++;
                temp=nm[i]*k;
                ft = sqrt(temp);
                ent = ft;

            }
            //hallamos el numero por el cual la multiplicacion con el caso de prueba es un cuadrado perfecto
            result[i]=k;
            
    }

//muestra los resultados
cout << " Salida: " << endl;
for (int i=0; i<cases; i++)
{
    cout << result[i] << endl;
}


}