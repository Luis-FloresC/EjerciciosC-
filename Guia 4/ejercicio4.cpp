#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define text 50

char cadena[text];
char cadena2[text];
int cantidad = 0;
int cantidad2 = 0;
int main()
{
    cout << "Introduce la cadena 1 de texto max(" << text << "): \n";
    cin.getline(cadena,text);
    cout << "Introduce la cadena 2 de texto max(" << text << "): \n";
    cin.getline(cadena2,text);

    for(int i = 0; cadena[i] != '\0'; i++)
    {
        cantidad++;
    }

    for(int j = 0; cadena2[j] != '\0'; j++)
    {
        cantidad2++;
    }
      cout << "Cadema 1: La cantidad de letras es: " << cantidad << endl;
       cout << "Cadena 2: La cantidad de  letras es: " << cantidad2 << endl;
    return 0;
}