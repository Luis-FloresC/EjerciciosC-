#include <iostream>
using namespace std;

int c =0;
int acum =0;
int main() {

   cout << "Numeros de 3 en 3 hasta el 100\n";
	for(int i = 0; i <= 100 ;i++)
	{
		if(i % 2 != 0)
		{
			cout << "|" << i << "|\t";
		    acum += i;
		}		
	}
	
	cout << "\nTotal de Impares: " << acum;
  return 0;
}
