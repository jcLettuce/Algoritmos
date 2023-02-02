 
#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h> 

using namespace std; 
int main() 
{
    int nc,aleat;

    cout <<"Indique el numero de casos prueba: ";
    cin >> nc;

    srand (time(0));
    int sudoku[9][9]/* //={{4, 1, 3, 8, 2, 5, 6, 7, 9},
                      {5, 6, 7, 1, 4, 9, 8, 3, 2},
                      {2, 8, 9, 7, 3, 6, 1, 4, 5},
                      {1, 9, 5, 4, 6, 2, 7, 8, 3},
                      {7, 2, 6, 9, 8, 3, 5, 1, 4},
                      {3, 4, 8, 5, 1, 7, 2, 9, 6},
                      {8, 5, 1, 6, 9, 4, 3, 2, 7},
                      {9, 7, 2, 3, 5, 8, 4, 6, 1},
                      {6, 3, 4, 2, 7, 1, 9, 5, 8}} */;
    //si quiere comprobar que el programa funciona ya que es muy improbable que con numeros aleatorios
    //el sudoku este bien hecho, comente de aqui hasta la siguiente linea comentada:
    for (int r=0;r<nc;r++)
    {
        cout << "Sudoku " << r << ": " << endl;
    
      for (int i=0; i<9;i++)
      {
        
        for (int j=0;j<9;j++)
        {
            aleat=1+rand()%9;
            sudoku[i][j]=aleat;
            cout << sudoku[i][j] <<" ";
        } 
        cout << endl;

      }

    //hasta aqui, y descomente la linea en donde declaro la matriz sudoku con valores que si dan de salida un SI

//comprobacion de las regiones, filas y columnas 
    bool  resuelto = true;

    for (int i=0;i<9;i++)
    {
        for (int j=1; j<9; j++)
        {
            //comprobar filas
            if (sudoku[i][0]==sudoku[i][j])
            {
                resuelto = false;
                break;
            }
            //comprobar columnas
            if (sudoku[0][i]==sudoku[j][i])
            {
                resuelto = false;
                break;
            }


        }
    }
    //ahora miramos en la region 3x3
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            for (int k=1; k<3; k++)
            {
        
            if (sudoku[i*3][j]==sudoku[k][j])
            {
              resuelto = false;
              break;
            }   
            if (sudoku[i*3][j+3]==sudoku[k+3][j+3])
            {
              resuelto = false;
              break;
            }  
             if (sudoku[i*3][j+6]==sudoku[k+6][j+6])
            {
              resuelto = false;
              break;
            }  

            } 
        }
    }

    if (resuelto)
    {
        cout  <<"SI"<< endl;
    
    }
    else 
    {
        cout <<"NO" << endl;
    }
    }

        
}
    
    

