#include <iostream>
using namespace std;

int main () {
	const double kelasI  = 300;
	const double kelasII   = 200;
	const double kelasVIP = 500;
	long double jumlahtiketkelasI;
	long double jumlahtiketkelasII;
	long double jumlahtiketkelasVIP;
	long double totaltiketkelasI;
	long double totaltiketkelasII;
	long double totaltiketkelasVIP;
	long double totalhargatiket;
	long double komisi;
	
	//judul
	cout << " Program Membaca Jenis dan Jumlah Tiket Yang Dibeli, Menghitung Total Harga Tiket dan Jumlah Komisi " << endl;
	
	//input
	cout << "Kelas I , harga tiket Rp. 300.000 " << endl;
	cout << "Kelas II  , harga tiket Rp. 200.000 " << endl;
	cout << "Kelas VIP, harga tiket Rp. 500.000 " << endl << endl;
	
	//input jenis dan jumlah tiket yang akan dibeli
	cout << "Masukan jumlah tiket yang mau dibeli" << endl;
	
	cout << "Tiket kelas I yang dibeli  : ";
	cin >> jumlahtiketkelasI;
	
	cout << "Tiket kelas II yang dibeli   : ";
	cin >> jumlahtiketkelasII;
	
	cout << "Tiket kelas VIP yang dibeli : ";
	cin >> jumlahtiketkelasVIP;
	
	//hitung
	totaltiketkelasI  = kelasI  * jumlahtiketkelasI;
	totaltiketkelasII   = kelasII   * jumlahtiketkelasII;
	totaltiketkelasVIP = kelasVIP * jumlahtiketkelasVIP;
	totalhargatiket = totaltiketkelasII + totaltiketkelasI + totaltiketkelasVIP;
	komisi = totalhargatiket * 0.075;
	
	//tampilkan
	cout << endl << "Total harga tiket" << endl;
	cout << "Tiket I   ""Rp. " << totaltiketkelasI  << ".000" << endl;
	cout << "Tiket II  ""Rp. " << totaltiketkelasII   << ".000" << endl;
	cout << "Tiket VIP ""Rp. " << totaltiketkelasVIP << ".000" << endl;
	cout << "          ""__________________ +" << endl;
	cout << "          ""Rp. " << totalhargatiket << ".000";
	cout << endl << endl << "Komisi yang didapatkan " << "Rp. " << komisi << ".000";
	
	return 0;
	
}
