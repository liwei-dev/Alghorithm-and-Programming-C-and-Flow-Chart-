#include <bits/stdc++.h>
using namespace std;

int pangkat_rek(int a, int n){
 	if (n == 0){
 			cout << " = ";
  		return 0;
  	}
 	else
 		cout << a;
 		if (n != 1) {
 			cout << " x ";
		 }
  		return a + pangkat_rek(a, n-1);
}

int main(){
	int hasil, a, n;
	cout << "-- Program Mencari Hasil Pangkat Dengan Perkalian --" << endl << endl;
	cout << "Masukkan angka yang akan di pangkatkan : ";
	cin >> a;
	cout << "Masukkan angka yang akan menjadi pangkatnya : ";
	cin >> n;

	cout << a << "^" << n << " = ";
	hasil = pangkat_rek(a, n);
	cout << hasil;

	return 0;
}
