#include <iostream>
using namespace std;

int main () {
	char nama[20];
	int nim;
	
	cout << "*PROGRAM MENAMPILKAN OUTPUT NAMA & NIM MAHASISWA*" << endl;
	//minta input nama tanpa spasi
	cout << "Ketikan nama anda : ";
	cin >> nama;
	//minta input nim
	cout << "Ketikan NIM anda : ";
	cin >> nim;
	cout << endl;
	
	//menuliskan output nim dan nama ke layar
	cout << "Nama anda adalah " << nama << endl;
	cout << "NIM anda adalah " << nim;
	
	return 0;
	
}
