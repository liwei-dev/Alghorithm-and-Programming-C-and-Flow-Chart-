#include <iostream>
using namespace std;

int main () {
	float Celcius, Fahrenheit;
	float C, F;
	
	//judul
	cout << "Konversi Dari Derajat Fahrenheit ke Derajat Celcius" << endl;
	
	//input
	cout << "Masukan Nilai Derajat Fahrenheit = ";
	cin >> Fahrenheit;
	
	//hitung
	C = 5*(Fahrenheit-32)/9;
	
	//menampilkan hasil
	cout << "Hasil Perhitungan : " << endl;
	cout << Fahrenheit << " F " << " sama dengan " << C << " C " << endl;
	
	return 0;
}
