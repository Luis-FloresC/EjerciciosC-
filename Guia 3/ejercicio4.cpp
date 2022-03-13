#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


char cadena[1000];
int cantidad = 0;
int main()
{
    cout << "Introduce la cadena de texto: \n";
    cin.getline(cadena,40);

    for(int i = 0; cadena[i] != '\0'; i++)
    {
        cadena[i] = tolower(cadena[i]);
        if(cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u')
        {
            cantidad++;
        }
    }
      cout << "La cantidad de Vocales en la frase es: " << cantidad << endl;
    return 0;
}