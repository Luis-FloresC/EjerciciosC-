#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int notas[3];
float acum = 0;
char letra;
int main()
{

    try
    {
        cout << "Ingreso de Notas\n\n";

        for (int i = 0; i <= 2; i++)
        {
            cout << "Ingrese nota " << i + 1 << ": ";
            cin >> notas[i];

            while (notas[i] < 0 || notas[i] > 100)
            {
                cout << "\nNota Valida 0-100\n";
                cout << "Ingrese nota " << i + 1 << ": ";
                cin >> notas[i];
            }
            acum += notas[i];
        }
        cout << "\nEl promedio es: " << acum / 3 << " %";
    }
    catch (const std::exception &e) // reference to the base of a polymorphic object
    {
        std::cout << e.what(); // information from length_error printed
    }

    return 0;
}
