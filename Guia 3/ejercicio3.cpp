#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int primos[100];
float acum = 0;
int cont = 0;
char letra;

bool isPrimo(int numero)
{
    // Casos especiales
    if (numero == 0 || numero == 1 || numero == 4)
    {
        return false;
    }

    for (int x = 2; x < numero / 2; x++)
    {
        if (numero % x == 0)
        {
            return false;
        }
    }
    // Si no se pudo dividir por ninguno de los de arriba, sí es primo
    return true;
}

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (isPrimo(i))
        {
            primos[cont] = i;
            cont++;
        }
    }
    // sizeof(arreglo): Funcion para obtener la longitud del arreglo
    //  int obtenerSize = (sizeof(primos) / sizeof(int))- (cont); //
    for (int j = 0; j < cont; j++)
    {
        cout << "|" << primos[j] << "|\t";
    }

    return 0;
}