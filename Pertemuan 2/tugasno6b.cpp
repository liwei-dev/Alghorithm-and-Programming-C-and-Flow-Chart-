#include <iostream>
using namespace std;

int main () {
	//Substitusi x = 100 meter
	//substitusi y = 100 yard di konversi ke meter
	const double x = 100;
	const double y = 91.44;
	double kecepatan_pelari_konstan;
	double t1;
	double t2;
	
	//judul
	cout << "Program Menghitung Waktu Yang Diperlukan Untuk Menempuh 100 Yard Dengan Kecepatan Konstan" << endl;
	cout << endl;
	
	//input
	cout << "Masukan waktu hasil dari pertandingan lari 100m dalam satuan menit " << endl;
	cin >> t1;
	
	//hitung
	//rumus kecepatan konstan pelari
	kecepatan_pelari_konstan = x / t1;
	//rumus menghitung waktu yang dibutuhkan untuk menempuh 100 yard
	t2 = y / kecepatan_pelari_konstan;
	
	//tampilkan
	cout << endl;
	cout << "Waktu yang diperlukan untuk menempuh 100 yard jika diketahui kecepatannya konstannya adalah " << t2 << " menit ";
	
	return 0;
}
