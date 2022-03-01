#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


string msjBienvenida;
bool col[5] = {false, false, false, false, false};
int nota =0;

int main()
{

    try
    {
       cout << "Mensaje de Bienvenida: \n";
       cin >> msjBienvenida; 
        cout << "\n";
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if(col[j] != true)
                {
                    cout << "Nota " << j+1 << "\t";
                    col[j] = true;
                }
                else
                {
                    nota = 0 + rand() % (0 - 100);
                    cout << nota << "\t";
                }

            }
            cout << "\n";
        }
    }
    catch (const std::exception &e) // reference to the base of a polymorphic object
    {
        std::cout << e.what(); // information from length_error printed
    }

    cout << "Mensaje: " << msjBienvenida << "\n";
    return 0;
}
