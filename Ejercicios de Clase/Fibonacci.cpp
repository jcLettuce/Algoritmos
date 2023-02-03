#include <iostream>

using namespace std;

int main()
{
    int suma, ultimo, penultimo, n;
    //n=10;
    cout << "Introduzca el numero de terminos: ";
    cin >> n;
    ultimo = 1;
    penultimo = 1;
    cout << penultimo << " " << ultimo << " "; 
    for (int i=2; i < n; i++)
    {
        suma = ultimo + penultimo;
        penultimo = ultimo;
        ultimo = suma;
        cout << ultimo << " ";
    }
    cout << endl;


}
    