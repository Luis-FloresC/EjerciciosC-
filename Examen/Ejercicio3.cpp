#include <iostream>
using namespace std;

int main()
{
    cout << "Incremento 0-250 (5 en 5) \n\n";
    for (int i = 0; i <= 250; i += 5)
    {
        cout << i << "\t";
    }
    cout << "\n";
    cout << "\nDecremento 250-0 (5 en 5) \n\n";
    for (int j = 250; j >= 0; j = j - 5)
    {
        cout << j << "\t";
    }
    cout << "\n";
    return 0;
}
