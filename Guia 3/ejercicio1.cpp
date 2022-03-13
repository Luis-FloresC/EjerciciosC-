#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int par[100];
float acum = 0;
int cont = 0;
char letra;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            par[cont] = i;
            cont++;
            //   cout << "|" << par[i] << "|\t";
        }
    }
    //sizeof(arreglo): Funcion para obtener la longitud del arreglo 
    int obtenerSize = (sizeof(par) / sizeof(int))- (cont); //
    for (int j = 0; j < obtenerSize; j++)
    {
        cout << "|" << par[j] << "|\t";
    }

    return 0;
}