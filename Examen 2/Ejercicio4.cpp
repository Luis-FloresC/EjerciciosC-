#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

char cadena[1000]={"Examen de programacion I"};
int cantidad = 0;
int main()
{
    

    for (int i = 0; cadena[i] != '\0'; i++)
    {
        
        
        if(cadena[i] != ' ')
        {
            cout  << "|" << cadena[i] << "|\t";
            cantidad++;
        }
        else
        {
            cout << "\n";
        }
        
    }
    cout << "\nLa cantidad de caracteres en la frase es: " << cantidad << endl;
    return 0;
}