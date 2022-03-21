#include <iostream>
using namespace std;

int c =0;
int num[10];

int main() {

   
	while(c <= 9)
	{
		cout << "Numero [" << c+1 << "]: ";
		cin >> num[c];
		c++;	
	}
	c =0;
	system("cls");
	cout << "\t\tResultado\n";
	
	while(c <= 9)
	{
		cout << "Numero [" << c+1 << "]: " << num[c] << "\n";
		c++;	
	}
	


  return 0;
}
