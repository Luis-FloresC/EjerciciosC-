#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int numeros[10];
int temporal;
int main()
{

    try
    {
        cout << "Ingreso de 10 Numeros\n\n";

        for (int i = 0; i <= 9; i++)
        {
            cout << "Ingrese numero " << i + 1 << ": ";
            cin >> numeros[i];
        }

        for(int i = 0; i <= 9 ; i++){
            for(int j = i+1; j <=9;j++)
            {
                if(numeros[i] > numeros[j])
                {
                    temporal = numeros[i];
                    numeros[i] = numeros[j];
                    numeros[j] = temporal;
                }
            }
        }

        for (int i = 0; i <= 9; i++)
        {
             cout << i + 1 << ".|" << numeros[i] << "|\t";
        }

   //     cout << "\nEl promedio es: " << acum / 3 << " %";
    }
    catch (const std::exception &e) // reference to the base of a polymorphic object
    {
        std::cout << e.what(); // information from length_error printed
    }

    return 0;
}
