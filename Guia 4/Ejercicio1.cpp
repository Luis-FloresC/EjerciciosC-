#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define tam 10

int b[tam];
int a[2][2] = {{1,2},{3,4}}; 


int main()
{
    
    cout << "Arreglo a\n";
    for (int i = 0; i < 2; i++)
    {
       
        for(int j = 0; j < 2; j++)
        {
             cout << "  |" << a[i][j] << "|   \t";
           
        }
        cout << "\n";
    }
    cout << "Arreglo a en la posicion: a[1][1] = " <<  a[1][1] << "\n";
    cout << "Arreglo B\n";
    for (int i = 0; i < tam; i++)
    {
        b[i] = i+1;
    }

     for (int i = 0; i < tam; i++)
    {
       cout << i+1 <<  ".|" << b[i] << "|\n";
    }
   

    
    return 0;
}