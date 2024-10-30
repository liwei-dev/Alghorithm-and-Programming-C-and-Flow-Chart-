#include <iostream>
using namespace std;

int pangkat2 (int s){
	return (s*s);
}
int kel (int s){
	return (s*4);
}
int main (){
	int s;
	int luas;
	int keliling;
	
	cout << "Program untuk memanggil fungsi menghitung luas persegi" << endl;
	cout << "Masukkan nilai sisi = ";
	cin >> s;
	
	//pemanggilan fungsi
	luas = pangkat2(s);
	keliling = kel(s);
	
	cout << "luas dari persegi adalah = " << luas << endl;
	cout << "keliling dari persegi adalah = " << keliling << endl;
	return 0;
}
