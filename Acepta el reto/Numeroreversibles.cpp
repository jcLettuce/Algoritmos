#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h> 

using namespace std;
int main()
{
    int nc,n,c,tem,rever,k,sum,a;
    cout << " Indique el numero de casos de prueba: ";
    cin >> nc;
    int casos[nc],result[nc];

    //Indica el numero de digitos para cada caso de prueba
    for (int i=0; i<nc; i++)
    {
        cout << "Caso de prueba " << i << ": ";
        cin >> n;
        casos[i]= n;
    
    }

   //generar los numeros con la cantidad de digitos para cada caso
   cout <<"La cantidad de numeros reversible para cada caso son:"<< endl;
for (int i=0; i<nc;i++)
{
    result[i]=0;
    for (int j=j=pow(10,casos[i]-1)+1;j<pow(10,casos[i]);j++)
    {
        c=j;
        rever=0;
        k=0;
        while (c>0)
        {
            k++;
            tem=c%10;
            
            c=c/10;
            rever=rever+(tem*pow(10,casos[i]-k));
        }
        

        sum=rever+j;
        c=0;
        c=sum;
        tem=0;
        a=0;
        while (c>0)
        {
            tem=c%10;
            c=c/10;
            if (tem%2==1)
            {
              a++;
            }
            else if (tem%2==0)
            {
                a=-casos[i];
            }
                  
        }
        
        if (a>=casos[i])
        {
            result[i]=result[i]+1;

        }


    }
   
   cout << "Numeros reversibles del caso de prueba " << i << ": " << result[i] <<endl;
}

}
