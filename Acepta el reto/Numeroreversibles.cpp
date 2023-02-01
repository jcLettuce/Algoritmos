#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h> 

using namespace std;
int main()
{
    int nc,n,p,temp,c,rever,suma,l,h,dig,b,a;
    cout << " Indique el numero de casos de prueba: ";
    cin >> nc;
    int casosp[nc],result[nc];

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
    b=0;
    
       if(casosp[i]!=0)      
       {


         for (int j=pow(10,casosp[i]-1)+1;j<j<pow(10,casosp[i]) ;j++)
            {
            
                int k;
                c=j;
                k=0;
                while (k<casosp[i])
                {
                while(c>0)
                {
                temp= c%10;
                c=c/10;
                rever = rever + temp*pow(10,casosp[i]-k);
                k++;
                }
                }
                suma= j + rever ;
                k=0;
                c=suma;
                while (k<n)
                {
                while(c>0)
                {
                c=c/10;
                k++;
                }
                }
                dig=k;

                int imp[dig];
                c=suma;
                k=0;
                while(c>0)
                {
                imp[k]=c%10;
                c=c/10;
                k++;
                }
                for(int l=0; l<dig;l++)
                {
                    if (imp[l]%2!=0)
                    {
                        if(l==dig-1)
                        {
                            b++;
                        }

                    }
                    else
                    {
                        break;
                    }  

                }
            
                
            }
        cout << "Caso de prueba " << i << ": " << b << endl;
        }
       
    
      
    }   
   
}