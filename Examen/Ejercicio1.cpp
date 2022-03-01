#include <iostream>
using namespace std;

string txtUsuario,txtPass;
string Usuario = "Admin";
string Contra = "Admin1234";

int main()
{
    cout << "Login: \n";
    cout << "Ingrese su Usuario: ";
    cin >> txtUsuario;
    cout << "Ingrese su contrase" << (char)164 << "a: ";
    cin >> txtPass;

    if(txtUsuario == Usuario && txtPass == Contra)
    {
        cout << "Bienvenido al sistema sr(a): " << Usuario << "\n";
    }
    else
    {
        cout << "contrase" << (char)164 << "a incorrecta,Vuelva a intentarlo ";
    }
    return 0;
}