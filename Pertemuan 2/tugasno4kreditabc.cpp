#include <iostream>
using namespace std;

int main () {
	int tagihan;
	int pembayaran;
	int metode;
	int bayarABC;
	int bayarlain;
	
	//judul
	cout << " Program menghitung diskon tagihan dengan kartu ABC dan tanpa kartu ABC " << endl << endl;
	
	//input
	cout << "masukan total tagihan : ";
	cin >> tagihan;
	cout << endl;
	cout << "metode pembayaran : " << endl;
	cout << "1. kartu ABC" << endl;
	cout << "2. pembayaran lainnya" << endl;
	cout << "pilihan : ";
	cin >> metode;
	
	//hitunglah
	bayarABC = tagihan * 80 / 100;
	bayarlain = tagihan * 90 / 100;
	
	//tampilkan
	if ( tagihan < 100000){
		cout << "total pembelian belum memnuhi untuk mendapat diskon";
	}
	
	if ( tagihan >= 100000 && metode == 1){
		cout << "anda mendapat diskon sebesar 20%"<< endl;
		cout << "total tagihan anda adalah : Rp " << bayarABC;
	}
	else if ( tagihan >= 100000 && metode == 2){
		cout << "anda mendapat diskon sebesar 10%"<< endl;
		cout << "total tagihan anda adalah : Rp " << bayarlain;
	}
	else {
		cout << "pilihan tidak valid";
	}
	
	 return 0;
}
