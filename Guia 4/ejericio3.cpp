#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define tam 100
int Num[tam];
float acum = 0;
int cont = 0;
char letra;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if ((i % 3 == 0))
        {
            Num[cont] = i;
            cont++;    
        }
    }

    for (int j = 0; j < cont; j++)
    {
        cout << j + 1 << ".|" << Num[j] << "|\n";
    }

    
    return 0;
}