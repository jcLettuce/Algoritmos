#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h> 

using namespace std;
int main()
{
    int nc,n,p,cn,temp,c,rever,suma,l,result,numero,h;
    cout << " Indique el numero de casos de prueba: ";
    cin >> nc;
    int casosp[nc],impar[casosp[nc]],numrever[nc];
    //Indica el numero de digitos para cada caso de prueba
    for (int i=0; i<nc; i++)
    {
        cout << "Caso de prueba " << i << ": ";
        cin >> n;
        casosp[i]= n;
    
    }

   //generar los numeros con la cantidad de digitos para cada caso
   cout <<"La cantidad de numeros reversible para cada caso son:"<< endl;
   for (int i=0;i<nc;i++)
   {
       if(casosp[i]!=0)      
       {
         cn = pow(10,casosp[i]);

         for (int j=pow(10,cn-1); j<cn;j++)
            {
            
                numero = j;
                int k;
                k=0;
                c=numero;
                while(numero>0)
                {
                temp= c%10;
                c=c/10;
                rever = rever + temp*pow(10,casosp[i]-k);
                k++;
                }
                suma= numero + rever ;
                k=0;
                while(suma>0)
                {
                c=suma;
                
                temp= c%10;
                c=c/10;
                impar[k]=c;
                k++;
                }
                if (impar[0]!=0)
                {
                k=0;
                for(int k=0; k<casosp[i];k++)
                {
                result=impar[k]%2;
                h=result + h;
                }
                if (h=casosp[i])
                {
                    numrever[i]=numrever[i] + 1;
                }
                
            }
            }
        cout << "Caso de prueba " << i << ": " << numrever[i] << endl;
        }
       
    
      
    }   
   
}