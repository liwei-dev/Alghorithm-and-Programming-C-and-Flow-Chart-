#include <iostream>
using namespace std;

int main () {
	int a, b, h_kuadrat, h_mod;
	
	//judul
	cout << "Aritmatika (Kuadrat dan Mod)" << endl;
	
	//input
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	
	//hitung
	h_kuadrat = a * a;
	h_mod = a % b;
	
	//menampilkan hasil
	cout << "Hasil Perhitungan" << endl;
	cout << a << " kuadrat = " << h_kuadrat << endl;
	cout << a << " mod " << b << " = " << h_mod;
	
	return 0;
}
