#include <iostream>
using namespace std;

int main () {
	//untuk f merupakan nilai konversi 1 meter ke feet
	//untuk i merupakan nilai konversi 1 meter ke inci
	const double f = 3.28084;
	const double i = 39.3701;
	int meter;
	double feet;
	double inci;
	
	//judul
	cout << "Program Mengkonversi Hasil Pertandingan Lompat Tinggi Dari Meter Ke Feet Dan Inci" << endl;
	
	//input
	cout << "meter = ";
	cin >> meter;
	
	//hitung
	feet = meter * f;
	inci = meter * i;
	
	//menampilkan hasil
	cout << endl;
	cout << "Hasil konversi dari " << endl << meter << "m" << " = " << feet << " feet " << endl;
	cout << endl;
	cout << "Hasil konversi dari " << endl << meter << "m" << " = " << inci << " inci " << endl;
	
	return 0;
	
}
