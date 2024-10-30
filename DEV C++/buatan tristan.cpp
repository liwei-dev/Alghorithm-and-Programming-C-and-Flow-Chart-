#include <iostream>
using namespace std;

int main () {
	int harga, koin, kembalian;
	int A,B,C,Q,D,N,P;
	
	cout << "Harga Barang : ";
	cin >> harga;
	
	kembalian = 100 - harga;
	cout << "Kembalian dari pembelanjaan anda adalah = " << kembalian << endl;
	
	A = kembalian % 25;
	B = A % 10;
	C = B % 5;
	
	Q = kembalian / 25;
	D = A / 10;
	N = B / 5;
	P = C / 1;
	
	cout << "Jumlah Quarter : " << Q<< endl;
	cout << "Jumlah Dime : " << D<< endl;
	cout << "Jumlah Nickel : " << N<< endl;
	cout << "Jumlah Penny : " << P<< endl;
	
	return 0;
}
