#include <iostream>
using namespace std;

int main(){
	int a;
	
	//judul
	cout << " Program untuk menentukan penduduk diperbolehkan mengikuti pemili sesuai krtiteria umur " << endl << endl;
	
	//input
	cout << "masukkan umur anda : ";
	cin >> a;
	cout << endl << endl;
	
	//tampilkan
	if (a >= 17){
		cout << "Sudah cukup umur, boleh ikut pemilu";
	}
	else if (a < 17){
		cout << "Belum cukup umur, tidak boleh ikut pemilu";
	}
	
	return 0;
}
