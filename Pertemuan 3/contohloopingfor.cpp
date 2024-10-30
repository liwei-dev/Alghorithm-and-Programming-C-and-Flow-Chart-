#include <iostream>
using namespace std;

int main () {
	float n1;
	float nr = 0;
	int jumlah;
	
	cout << "Program untuk menghitung rata-rata bilangan" << endl;
	cout << "Ketikkan jumlah bilangan : ";
	cin >> jumlah;
	
	for (int i = 1; i <= jumlah; i++) {
		cout << "Masukkan bilangan ke-" << i << " : ";
		cin >> n1;
		nr = nr + n1;
	}
	
	nr = nr/jumlah;
	cout << endl << endl;
	cout << "Rata-rata dari " << jumlah << " bilangan = " << nr << endl;
	
	return 0;
}
