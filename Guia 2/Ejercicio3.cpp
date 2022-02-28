#include <iostream>
using namespace std;

int mes = 0;
int main()
{

    try
    {
        cout << "Introduce el numero de mes(1-12): ";
        cin >> mes;
        while (mes < 1 || mes > 12)
        {
            cout << "Introduce el numero de mes(1-12): ";
            cin >> mes;
        }

        if (mes == 2)
        {
            cout << "El Mes" << mes << " cuenta con 28 dias";
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            cout << "El Mes " << mes << " cuenta con 30 dias";
        }
        else
        {
            cout << "El Mes " << mes << " cuenta con 31 dias";
        }
    }
    catch (const std::exception &e) // reference to the base of a polymorphic object
    {
        std::cout << e.what(); // information from length_error printed
    }

    return 0;
}
