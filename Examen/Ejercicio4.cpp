#include <iostream>
using namespace std;
int anio =0;
float sueldoAnual = 40000.00;
float aumento = 0.0;
float sueldoTotal = 0;
int main()
{
    cout << "Ingrese los a" << (char)164 << "os de trabajo: ";
    cin >> anio;

    if(anio > 10)
    {
        aumento = 0.1;
    }
    else if(anio <= 10 && anio > 5)
    {
        aumento = 0.07;
    }
    else if(anio <= 5 && anio > 3)
    {
        aumento = 0.05;
    }
    else
    {
        aumento = 0.03;
    }

    sueldoTotal = sueldoAnual + (sueldoAnual * aumento);


    cout << "Sueldo Total: " << sueldoTotal;
    cout << "\nAumento: " << aumento * 100 << "%";

    return 0;
}