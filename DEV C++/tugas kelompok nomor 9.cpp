#include <iostream>
using namespace std;

int main () {
	int i=0;
	int sr; //suhu ruangan
	int st; //suhu yang dikontrol atau ditentukan
	int sa1; //suhu setelah 5 menit jika suhu lebih rendah
	int sa2; //suhu setelah 5 menit jika suhu lebih tinggi
	
	//judul
	cout << " Program pengatur suhu otomatis " << endl;
	
	//input
	cout << "masukkan derajat suhu yang di kontrol : ";
	cin >> st;
	cout << "masukkan derajat suhu ruangan setelah 5 menit : ";
	cin >> sr;
	cout << endl;
	
	//loop
	while (i<1){
		if (sr > st){
		sa1 = sr - 2;
		cout << "karena suhu ruangan lebih panas, maka diturunkan 2 derajat menjadi " << sa1 << endl;
		}
		else if (sr < st){
		sa2 = sr + 2;
		cout << "karena suhu ruangan lebih dingin, maka dinaikkan 2 derajat menjadi " << sa2 << endl;
		}
		i++;
	}
	
	return 0;
}





