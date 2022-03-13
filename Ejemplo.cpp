#include <iostream>
#include <string>
#include <algorithm>

using std::cout; using std::endl;
using std::string; using std::reverse;

int main(){
    string tmp_s = "0703200003793";
    cout << "Numero de cuenta: ";
    cout << tmp_s << endl;
	 cout << "Numero de cuenta al reves: ";
    string tmp_s_reversed (tmp_s.rbegin(), tmp_s.rend());
    cout << tmp_s_reversed << endl;

    return EXIT_SUCCESS;
}
