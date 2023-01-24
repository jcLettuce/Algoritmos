#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h> 


using namespace std;

int main(){
    int dim, index,c,k,dig,num;
    bool pos[] = {false};

    cout << "Ingrese el numero que quiere comprobar: "; 
    cin >> num;
    
    c=num;
    k=0;
    while (c>0)
    {
        c=c/10;
        k++;
    }
    dim=k;
int cifras[dim];
    c=num;
    k=1;
    while (c>0)
    {
        cifras[dim-k]=c%10;
        c=c/10;
        k++;
        
    }


    k=0;
    while (pos[index]!= true)
    {   
        pos[index]= true;
        dig = cifras[index];
        index = (index + dig)%dim;
        k++;
    }

    if(k==dim)
    {
        cout << "Es un numero saltarin";
    } 
    else 
    {
        cout << "No es un numero saltarin";
    }

}