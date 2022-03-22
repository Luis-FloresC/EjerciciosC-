#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int par[10];
float acum = 0;
int cont = 0;
char letra;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if ((i % 2 == 0))
        {
            par[cont] = i;
            cont++;
            acum += i;
            if (cont == 10)
            {
                break;
            }
        }
    }

    for (int j = 0; j < cont; j++)
    {
        cout << j + 1 << ".|" << par[j] << "|\n";
    }

    cout << "La suma total es: " << acum << endl;
    return 0;
}