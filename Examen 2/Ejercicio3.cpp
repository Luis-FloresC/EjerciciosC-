#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define tamanioArreglo 8

float acum = 0;
int cont = 0;
char letra;

int tabla[tamanioArreglo][tamanioArreglo];
int main()
{

     for (int i = 0; i < tamanioArreglo; i++)
    {
        
        for(int j = 0; j < tamanioArreglo; j++)
        {
           tabla[i][j] = (i+j) + rand() % (126 - 33);   
        }
        
    }

    
    for (int i = 0; i < tamanioArreglo; i++)
    {
       
        for(int j = 0; j < tamanioArreglo; j++)
        {
            cout << "|" << tabla[i][j] << "|\t";
        }
        cout << "\n";
    }

    

    
    return 0;
}