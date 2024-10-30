#include <iostream>
using namespace std;

int pangkat3 (int k){
	return (k*k*k);
}
int main (){
	int angka1;
	int angka2;
	int hasil1;
	int hasil2;
	
	cout << "Masukkan angka yang ingin dipangkatkan 3 = ";
	cin >> angka1;
	cout << "Masukkan angka yang ingin dipangkatkan 3 = ";
	cin >> angka2;
	
	hasil1 = pangkat3(angka1);
	hasil2 = pangkat3(angka2);
	cout << "Hasil dari " << angka1 << "^3 adalah " << hasil1 << endl;
	cout << "Hasil dari " << angka2 << "^3 adalah " << hasil2;
	return 0;

}
