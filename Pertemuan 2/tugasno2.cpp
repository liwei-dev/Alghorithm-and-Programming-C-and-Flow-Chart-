#include <iostream>
using namespace std;

int main () {
	const long double PHI = 3.141592;
	int jarijari;
	double keliling;
	double luas;
	
	//judul
	cout << "Menghitung Luas & Keliling Lingkaran" << endl;
	
	//input
	cout << "Masukan Jari-Jari Lingkaran : ";
	cin >> jarijari;
	
	//hitung
	keliling = PHI * 2 * jarijari;
	luas = PHI * jarijari * jarijari;
	
	//menampilkan hasil
	cout << endl << "Keliling lingkaran : " << keliling << "cm" << endl;
	cout << "Luas lingkaran : " << luas << "cm";
	
	return 0;
}
