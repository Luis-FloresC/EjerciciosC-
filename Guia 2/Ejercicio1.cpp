#include <iostream>
using namespace std;

char genero;
int main()
{
	;
	cout << "Genero (m o f): ";
	cin >> genero;
	genero = tolower(genero);
	// Validacion para solo permitir 2 caracteres M o F
	while (genero != 'm' && genero != 'f')
	{
		cout << "Genero (m o f): ";
		cin >> genero;
		// Funcion para convertir el caracter en minuscula
		genero = tolower(genero);
	}

	switch (genero)
	{
	case 'm':
		cout << "Genero: Masculino \n";
		break;
	case 'f':
		cout << "Genero: Femenino \n";
		break;
	}

	return 0;
}
