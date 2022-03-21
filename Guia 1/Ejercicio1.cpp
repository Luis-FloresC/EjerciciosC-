#include <iostream>
using namespace std;

int numeroPantalones=0;
float precio= 100;
float descuento=0;
float total=0;

int main() {
  cout << "Numero de Pantalones a comprar?\n";
  cin >> numeroPantalones;
  
  if(numeroPantalones >= 5 && numeroPantalones <= 12)
  {
  	descuento = 0.15;
  }
  else if(numeroPantalones > 12)
  {
  	descuento = 0.3;
  }
  
  total = (precio * numeroPantalones)-(precio * numeroPantalones * descuento);
  cout << "\n";
  cout << "Total de Pantalones: " << numeroPantalones << "\n";
  cout << "Precio por unidad: " << precio << "\n";
  cout << "Descuento: " << descuento * 100 << "%\n";
  cout << "Total a pagar: " << total << "\n";
  
  return 0;
}
