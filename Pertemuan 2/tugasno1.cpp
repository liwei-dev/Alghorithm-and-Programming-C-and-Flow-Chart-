#include <iostream>
using namespace std;

int main () {
	float panjang, lebar, keliling_segiempat;
	
	//judul
	cout << "Program Untuk Menghitung Keliling Segiempat" << endl;
	
	//input
	cout << "masukan sisi panjang = ";
	cin >> panjang;
	cout << "masukan sisi lebar = ";
	cin >> lebar;
	
	//hitung
	keliling_segiempat = 2 * panjang + 2 * lebar;
	
	//menampilkan hasil
	cout << "Hasil Perhitungan" << endl;
	cout << "keliling segiempat = " << keliling_segiempat << endl;
	
	return 0;
}
