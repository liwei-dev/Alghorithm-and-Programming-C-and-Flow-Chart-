#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	int c;
	int d;
	int ratarata;
	
	//judul
	cout << " Program untuk menyatakan kelulusan mahasiswa " << endl << endl;
	
	//input
	cout << "masukan nilai pertama : ";
	cin >> a;
	cout << endl;
	
	cout << "masukan nilai kedua : ";
	cin >> b;
	cout << endl;
	
	cout << "masukan nilai ketiga : ";
	cin >> c;
	cout << endl;
	
	cout << "masukan nilai keempat : ";
	cin >> d;
	cout << endl;
	
	//hitung
	ratarata = (a + b + c + d)/4;
	cout << "nilai rata rata anda adalah : " << ratarata << endl;
	
	//tampilkan
	if ( ratarata > 60 && ratarata <= 100){
		cout << "anda lulus";
	}
	else if ( ratarata <= 60){
		cout << "anda tidak lulus";
	}
	
	return 0;
}
