#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

char letra;
int main()
{

    try
    {
        cout << "Numero\t"
             << "Letra\t"
             << "Letra\n";
        for (int i = 0; i <= 9; i++)
        {
            cout << i + 1 << "\t";
            for (int j = 0; j < 2; j++)
            {
                letra = 33 + rand() % (126 - 33);
                cout << letra << "\t";
            }
            cout << "\n";
        }
    }
    catch (const std::exception &e) // reference to the base of a polymorphic object
    {
        std::cout << e.what(); // information from length_error printed
    }

    return 0;
}
