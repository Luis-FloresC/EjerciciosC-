#include <iostream>
using namespace std;

string  nombre;
char genero;
int main() {
  cout << "Escriba su Nombre: ";
  cin >> nombre;
  cout << "Genero (M o F): ";
  cin >> genero;
  genero = toupper(genero);
  //Validacion para solo permitir 2 caracteres M o F
	while(genero != 'M' && genero != 'F')
	{
		cout << "Genero (M o F): ";
		cin >> genero;
		//Funcion para convertir el caracter en mayuscula
		genero = toupper(genero);
	}
	
	cout << "\nNombre: " << nombre << "\n";  
	
	if(genero == 'M')
	{
		cout << "Genero: Masculino \n";  
	}
	else
	{
		cout << "Genero: Femenino \n";  
	}


  return 0;
}
