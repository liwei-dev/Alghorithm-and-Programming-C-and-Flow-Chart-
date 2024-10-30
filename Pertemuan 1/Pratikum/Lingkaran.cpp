#include <iostream>
using namespace std;

int main () {
	const double PHI = 3.1413;
	int jarijari;
	double keliling; 
	double luas;
	
	cout << "* PROGRAM PENGHITUNG KELILING & LUAS LINGKARAN" << endl;
	cout << "Masukkan jari-jari lingkaran : ";
	cin >> jarijari;
	
	keliling = 2 * PHI * jarijari;
	luas = PHI * jarijari * jarijari;
	
	cout << endl << "Keliling lingkaran : " << keliling << "cm" << endl;
	cout << "Luas lingkaran : " << luas << "cm";
	
	return 0;
}
