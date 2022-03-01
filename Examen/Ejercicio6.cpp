#include <iostream>
using namespace std;

int main()
{
    cout << "Dias de la semana\n";
    for (int i = 0; i <= 6; i++)
    {
        switch (i)
        {
        case 0:
            cout << i + 1 << "-domingo \n";
            break;
        case 1:
            cout << i + 1 << "-lunes \n";
            break;
        case 2:
            cout << i + 1 << "-martes \n";
            break;
        case 3:
            cout << i + 1 << "-miercoles \n";
            break;
        case 4:
            cout << i + 1 << "-jueves \n";
            break;
        case 5:
            cout << i + 1 << "-viernes \n";
            break;
        case 6:
            cout << i + 1 << "-sabado \n";
            break;
        default:
            cout << "\n";
            break;
        }
    }
    return 0;
}