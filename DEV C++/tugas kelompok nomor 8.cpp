#include <iostream>
using namespace std;

int main () {
	char nama [20];
	int x; //gaji pokok atau awal
	int i=0;
	int y; //gaji akhir setelah ditambahkan persentase kenaikan gaji
	
	//judul
	cout << " Program menghitung kenaikkan gaji " << endl;
	
	//input
	cout << "Masukkan nama pegawai : ";
	cin >> nama;
	cout << endl;
	cout << "Masukkan gaji awal : ";
	cin >> x;
	cout << endl;
	
	//loop
	while (i<1){
		if (x >= 0 && x <=10000000){
			y = x + (x * 0.2);
			cout << nama << " dengan gaji " << x << " mendapatkan kenaikkan gaji menjadi " << y << endl;
		}
		else if (x >= 10000001 && x <= 15000000){
			y = x + (x * 0.1);
			cout << nama << " dengan gaji " << x << " mendapatkan kenaikkan gaji menjadi " << y << endl;
		}
		else if (x >= 15000001 && x <= 20000000){
			y = x + (x * 0.05);
			cout << nama << " dengan gaji " << x << " mendapatkan kenaikkan gaji menjadi " << y << endl;
		}
		else {
			cout << nama << " tidak mendapatkan kenaikkan gaji ";
		}	
		i++;
	}
	
	return 0;
}
