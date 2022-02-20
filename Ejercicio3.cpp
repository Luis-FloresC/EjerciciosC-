#include <iostream>
using namespace std;

int c =0;
int acum =0;
int main() {

   cout << "Numeros de 2 en 2 hasta el 100\n";
	while(c <= 100)
	{
		if(c % 2 == 0)
		{
			cout << "|" << c << "|\t";
			acum += c;
		}
		c++;	
	}
	
	cout << "\n\nTotal de Pares: " << acum << "\n";


  return 0;
}
