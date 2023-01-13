#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <stdlib.h>

using namespace std;
int main()
{
    
    int n;
    double dx,a,b,sum;
    cout << " Indique el limite inferior: ";
    cin >> a;
    cout << " Indique el limite superior: ";
    cin >> b;
    cout << " Indique el numero de particiones: ";
    cin >> n;
    double fx[n],area[n];
    dx=(b-a)/n;
    double x[n];
    sum=0;

    
    for (int i = 0; i < n; i++)
    {
      x[i]=a+i*dx; 
      fx[i] = pow(x[i],2);
      area[i]=fx[i]*dx;
      sum=sum + area[i];

    }

    cout << "El area de la funcion es: "<< sum;


}