#include <iostream>
using namespace std;

int luas_pp (int p, int l){
	return (2*(p+l));
}
int kel_pp (int p, int l){
	return (2*(p+l));
}

int main (){
	int p;
	int l;
	int luas;
	int keliling;
	
	cout << "Program untuk memanggil fungsi menghitung luas persegi panjang" << endl;
	cout << "Masukkan nilai panjang = ";
	cin >> p;
	cout << "Masukkan nilai lebar = ";
	cin >> l;
	
	//pemanggilan fungsi
	luas = luas_pp(p, l);
	keliling = kel_pp(p, l);
	
	cout << "luas dari persegi panjang adalah = " << luas << endl;
	cout << "keliling dari persegi panjang adalah = " << keliling << endl;
	return 0;
}
