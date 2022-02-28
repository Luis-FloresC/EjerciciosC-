#include <iostream>
using namespace std;

int anio = 0;
int main()
{

	try
	{
		cout << "Introduce a" << (char)164 << "o: ";
		cin >> anio;

		if (anio % 4 == 0 and anio % 100 != 0 or anio % 400 == 0) // Condición de a�o bisiesto
			cout << "Bisiesto" << endl;
		else
			cout << "No es bisiesto" << endl;
	}
	catch (const std::exception &e) // reference to the base of a polymorphic object
	{
		std::cout << e.what(); // information from length_error printed
	}

	return 0;
}
