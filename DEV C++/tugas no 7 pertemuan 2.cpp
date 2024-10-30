#include <iostream>
using namespace std;

int main (){
	float y, count, ratarata, jumlah;
	int x;
	
	cout << "Program untuk menentukan bilangan genap atau ganjil dan menghitung rata rata angka genap" << endl << endl;
	
	cout << "Ketikan Jumlah Bilangan : ";
	cin >> jumlah;
	
	for (int i = 1; i <= jumlah; i++){
		cout << "Masukan Bilangan Ke- " << i << " : ";
		cin >> x;
		if ( x % 2 == 0 ){
			cout << x << " merupakan bilangan genap " << endl << endl;
			y = y + x;
			count = count + 1;
		}
		else {
		cout << x << " merupakan bilangan ganjil " << endl << endl;
		}
	}
	
	ratarata = y / count;
	cout << "banyaknya bilangan genap ada : " << count << " bilangan " << endl;
	cout << "rata-rata dari bilangan genap adalah : " << ratarata;
	
	return 0;
}


