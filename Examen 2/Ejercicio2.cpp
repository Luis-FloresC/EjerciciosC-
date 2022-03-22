#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define text 50

char cadena[text];

int cantidad = 0;

int main()
{
    cout << "Introduce la cadena 1 de texto max(" << text << "): \n";
    cin.getline(cadena,text);
  
    cout << "Letra por letra\n";
    for(int i = 0; cadena[i] != '\0'; i++)
    {
        cout << cadena[i] + " --\t";
        cantidad++;
        
    }

    

    return 0;
}