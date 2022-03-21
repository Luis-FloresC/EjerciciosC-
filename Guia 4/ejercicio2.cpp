#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define tamanioArreglo 3

float acum = 0;
int cont = 0;
char letra;

int tabla[tamanioArreglo][tamanioArreglo]= {{1,8,9},{2,4,6},{5,8,7}};
int main()
{
    cout << "\t(Col-0)\t\t(Col-1)\t\t(Col-2)\n";
    for (int i = 0; i < tamanioArreglo; i++)
    {
        cout  << "(Row-" << i << ")  ";
        for(int j = 0; j < tamanioArreglo; j++)
        {
             cout << "  |" << tabla[i][j] << "|   \t";
            cont++;
        }
        cout << "\n";
    }

    cout << "\nEl Arreglo tiene " << cont << " Elementos.";

    
    return 0;
}