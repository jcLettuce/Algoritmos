#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

using namespace std;
int main(){
    double G;
    
    G=0.00000006673;
    //Declaracion de la variable tiempo
    int n;
    n=0;
    cout  << "Indique el tiempo de la simulacion: ";
    cin >> n;
    int t[n];
    for (int i=0; i<n; i++)
    {
        t[i]=i+1;
        
    }



//Declaraciones de la configuracion de los cuerpos
    int np,i;
    np=4;
    //Aceleracion en x,y,z de cada cuerpo [m/s^{2}]
    double AceleracionX[np]={0,0,0,0};
    double AceleracionY[np]={0,0,0,0};
    double AceleracionZ[np]={0,0,0,0};
    //Masas del sol y planetas [Kg]
    double masas[np]={1.989e30,0.33011e24,4.8675e24,5.9724e24};
    //Velocidades [m/s]
    double velocidadx[np]={0,0,0,0};
    double velocidadz[np]={0,0,0,0};
    double velocidady[np]={0,0,35.02e3,29.78e3};
    //Posiciones x,y,z [Gm]
    double radiocte[np]= {0,57.909e9,108.209e9,149.596e9};
    double X0[np]= {0,57.909e9,108.209e9,149.596e9};
    double Y0[np]={0,0,0,0};
    double Z0[np]={0,0,0,0};
    //Variable temporal de las posiciones
    double X,Y,Z;
    X=0;
    Y=0;
    Z=0;   
    double Xmag[np]={0,0,0,0};
    double Ymag[np]={0,0,0,0};
    double Zmag[np]={0,0,0,0};
    double rvec[np]={0,0,0,0};
    string nombres[np]={"planeta1.txt","planeta2.txt","planeta3.txt","planeta4.txt"};
    ofstream archivos[np];

    for (int i = 0; i < np ; i++)
    {
        archivos[i].open(nombres[i]);
    }

    for (int k=0; k <n; k++)
    {
        
        for (int i=0; i <np; i++)
        {
            
            
                 
                
            archivos[i] << X0[i] << ", " << Y0[i] << ", " << Z0[i] << endl; 
            for (int j=0; j < np; j++)
            {  
                //cout << Xmag[1] << ", ";
                Xmag[j]= 
                //cout << Xmag[1] << ", ";
                cout<< Y0[1] <<", ";
                Ymag[j]= abs(sqrt(pow(radiocte[j],2)-pow(X0[j],2))); 
                Zmag[j]= abs(sqrt(pow(radiocte[j],2)-pow(X0[j],2)));
                X=X0[i];
                Y=Y0[i];
                Z=Z0[i];
                if (j!=i)
                {
                    //cout << AceleracionX[1] << ", ";
                    AceleracionX[i]= AceleracionX[i] + (G*masas[j]*(X0[j]-X))/pow(Xmag[j]-Xmag[i],3);
                    
                }
                else
                {
                    AceleracionX[i]= AceleracionX[i] + 0;
                }
                 if (j!=i)
                {
                    AceleracionY[i]= AceleracionY[i] + (G*masas[j]*(Y0[j]-Y))/pow(Ymag[j]-Ymag[i],3);
                }
                else
                {
                    AceleracionY[i]= AceleracionY[i] + 0;
                }
                 if (j!=i)
                {
                     AceleracionZ[i]= AceleracionZ[i] + (G*masas[j]*(Z0[j]-Z))/pow(Zmag[j]-Zmag[i],3);
                }
                else 
                {
                     AceleracionZ[i]= AceleracionZ[i] + 0;
                }
                
            
            }
            //cout << X0[i] << ", ";
            //cout << AceleracionX[1] << ", ";
            velocidadx[i]=velocidadx[i] + AceleracionX[i]*t[k];
            X0[i]= X0[i] + velocidadx[i]*t[k];

            velocidady[i]=velocidady[i] + AceleracionY[i]*t[k];
            Y0[i]= Y0[i] + velocidady[i]*t[k];
            cout << AceleracionY[1] << ", ";
            velocidadz[i]=velocidadz[i] + AceleracionZ[i]*t[k];
            Z0[i]= Z0[i] + velocidadz[i]*t[k]; 
            //cout << X0[2] << ", ";
            //cout << velocidadx[2] << ", ";
            
        }
    }
    for (int i = 0; i < np ; i++)
    {
        archivos[i].close();
    }

}