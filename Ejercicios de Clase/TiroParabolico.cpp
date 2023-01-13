#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

using namespace std;
int main()
{
    float t,g,V_0,theta_0,X,Y,V_x,V_y,dt;
    g=-9.8;
    V_0=0;
    theta_0=0;
    t=0;
    int n;
    n=0;
    cout << "Indique tiempo de la simulacion: ";
    cin >> t;
    cout << "Indique numero de particiones de la simulacion: ";
    cin >> n;
    cout << "Porfavorcito, podrias indicar la velocidad inicial[m/s] del tiro, pero no lo tire muy fuerte que es lesivo: ";
    cin >> V_0;
    cout << "Porfavorcito tambien, podrias indicar el angulo del tiro: ";
    cin >> theta_0;
    dt=t/n;
    X=0;
    Y=0;
    V_x = V_0*cos(theta_0*M_PI/180);
    V_y = V_0*sin(theta_0*M_PI/180);
    ofstream archivo;
    archivo.open("Posicion.txt");
    for (int j=0;j < n;j++)
    {
        
        X = X + V_x*(j*dt);
        V_y= V_y + g*(j*dt);
        Y = Y + V_y*(j*dt);
        if (Y>=0)
        {
            archivo << X << ", " << Y << endl;

        }
        
    }

}
