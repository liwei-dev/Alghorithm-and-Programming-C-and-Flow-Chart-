#include <iostream>
using namespace std;
int main (){
	int baris, kolom, jumlah_kolom = 1;
	char x = 'A', y = 'A';
	
	cout << "Membuat 2 setengah segitiga" << endl << endl;
	
	for (baris = 1; baris <= 6; baris++){
		for (kolom = 1; kolom <= jumlah_kolom; kolom++){
			cout << x << "";
		}
		x++;
		jumlah_kolom++;
		cout << endl;
	}
	for (baris = 1; baris <= 6; baris++){
		y = 'A';
		for (kolom = 1; kolom <= baris; kolom++){
			cout << y;
			y++;
		}
		cout << endl;
	}
	return 0;
	
}
