#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

int main()

{

int n,csc,c,m,k,sum,j;
cout << "Indique el numero de casos de prueba: "; 
cin >> csc; 

int casos[csc];
for (int i=0; i<csc; i++)
{
    cout << "Caso de prueba " << i << ": ";
    cin >> n;
    casos[i]=n;


}
cout << " Salida "<< endl;
for (int i=0; i<csc; i++)
{
    if (casos[i]==0)
    {
        break;
    }
    else
    {

    
    j=0;
    while(sum!=casos[i])
    {
    sum=0;
    j++;
    c=j;
    while (c>0)
    {
        m=c%10;
        c=c/10;
        sum=m+sum;
        
    }
 
    
    }

    cout << "Caso de prueba " << i << ": " << j <<endl;
    }

}

}