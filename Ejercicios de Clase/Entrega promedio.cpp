#include <iostream>

using namespace std;

int main()
{
    float v,n,a,suma,b,c,promedio;
    cout << "Introduzca el numero de valores: ";
    cin >> n;
    a = 0 ;
    promedio = 0;
    v = 0;
    suma = 0;
    
    for (float i = 0; i < n; i++)
    {
        a = a + 1;
        cout << "Valor " << a << ": ";
        cin >> v;
        b = v; 
        suma = b + suma;
        
        
        

    }
    promedio = suma / n;
    cout <<"EL promedio de los valores es: " <<promedio<< " ";
    cout << endl;
    
}