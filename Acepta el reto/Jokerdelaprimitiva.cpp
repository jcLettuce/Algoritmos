#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

int main()
{
    int casos, i, j, k , num, blt, dig, win, lost;

    cout << "Ingrese el numero de casos de prueba: "; cin >> casos;

    double evalua[casos][7], boletas[casos][7];

    for (i = 0; i < casos; i++)
    {
        cout << "Ingrese el numero del sorteo (7 digitos)" << endl;
        cin >> num;

        while(num>pow(10,7)-1)
        {
            cout << "Numero invalido" << endl << "Ingrese nuevamente un numero de 7 digitos" << endl;
            cin >> num;
        }
        
        for ( j = 6; j >=0; j--)
        {
            dig = num%10;
            num = num/10;
            evalua[i][j] = dig;
        }
        
        cout << "Ingrese el numero del boleto (7 digitos)" << endl;
        cin >> blt;

            while(blt>pow(10,7)-1)
        {
            cout << "Numero invalido" << endl << "Ingrese nuevamente el numero de la boleta  (7 digitos)" << endl;
            cin >> blt;
        }

        for ( j = 6; j >=0; j--)
        {
            dig = blt%10;
            blt = blt/10;

            boletas[i][j] = dig;
        }
    }
    

    for(i=0; i < casos; i++)
    {
       for(j=0; j < 7; j++)
       {
            for(k=0; k < 6; k++)
            {
                 if(evalua[i][j]<evalua[i][k])
                {
                 swap(evalua[i][j],evalua[i][k]);
                }

                if(boletas[i][j]<boletas[i][k])
                {
                swap(boletas[i][j],boletas[i][k]);
                }
            }
       }
    }

    for (i = 0; i < casos; i++)
    {
        win = 0;
        for (j = 0; j < 7; j++)
        {
            if (evalua[i][j] == boletas[i][j])
            {
                win = win + 1;
            }
            
        }
        
        if (win == 7)
        {
            cout <<"GANA" <<endl;
        }
        else{
            cout << "PIERDE" ;
        }
        
        lost = 0;
    }
}