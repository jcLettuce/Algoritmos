#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main(){
    double G,r,msol,multiplicacion,distancia,np;
    G=0.00000006673;
    np=4;
    distancia=0;
    double f[4]={0,0,0,0};
    double f2[4][4];
    //string p[4]={{"Mercurio"},{"Venus"},{"Tierra"},{"Marte"}};
    msol=1.989e30;
    multiplicacion=0;
    double vecx[4]= {57.909e9,08.209e9,149.596e9,227.923e9};
    double masas[4]={0.33011e24,4.8675e24,.9724e24,0.64171e24};
    double velocidady[4]={47.36e3,35.02e3,29.78e3,24.07e3};
     //Fuerza del sol con los otros planetas.
    for (int i=0; i < np; i++)
    {
        multiplicacion=G*msol*masas[i];
        distancia = vecx[i]*vecx[i];
        f[i]=multiplicacion/distancia;
        
        //cout << "Fuerza gravitacional del Sol sobre "<< ": "<< f[i] <<endl;
    }
    //Fuerza de la interaccion con otros planetas
    for (int i=0; i < np; i++)
    {
        for (int j=0; j < np; j++)
        {
            
            multiplicacion=G*masas[i]*masas[j];
            distancia=abs(vecx[j]-vecx[i]);
            f2[i][j]=multiplicacion/distancia;

            

            
            
        }
    }

    
    for (int i = 0; i < np; i++)
            {
                for (int j = 0; j < np; j++)
                {
                    cout << f2[i][j] << " ";

                }
                
                
            }  
double X = 0.0;
double Y = 0.0;
nombres[np]={"planeta1.txt","planeta2.txt","planeta3.txt","planeta4.txt"}
for (int i=0 ; i<n; i++){
    ofstream archivo[i];
    archivo1.open(nombres[i]);
    
    for(int j=0; j<n; j++)
}


}
