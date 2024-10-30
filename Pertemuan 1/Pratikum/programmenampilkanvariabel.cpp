#include <iostream>
using namespace std;

int main () {
	int x = 3, y;
	
	//judul
	cout << "Program Menanmpilkan Variabel" << endl << endl;
	cout << "Tanpa Input" << endl;
	x = 2;
	
	cout << " x tanpa input = "  << x << endl << endl;
	
	cout << "Dengan Input" << endl;
	cout << "x = ";
	cin >> x;
	cout << "x setelah input = " << x << endl;
	
	return 0;
}
