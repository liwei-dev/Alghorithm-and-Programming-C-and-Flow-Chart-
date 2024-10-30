#include <bits/stdc++.h>
using namespace std;

// PROJEK MEMBUAT PROGRAM POINTER
// KELOMPOK 9, Anggotanya:
// Li Wei_825220054
// Michael Tristan Pramono_825220071
// Nicolas Phi_825220075
// Khania Luiza Cahya Tuluswati_825220078
// Cecillia Cherish Mardjuki_825220090

int main (){
	int *pointx;
	int *pointy;
	int hasil;
	pointx = new int;
	pointy = new int;
	*pointx = 0;
	*pointy = 0;
	
	cout << "\n	************************************** \n";
	cout << "	** PROGRAM UNTUK MENGHITUNG PANGKAT ** \n";
	cout << "	************************************** \n\n";
	cout << endl;
	
	cout << "Masukan Nilai X (nilai yang akan dipangkatkan) = ";
	cin >> *pointx;
	
	cout << "Masukan Nilai Y (nilai yang akan menjadi pangkatnya) = ";
	cin >> *pointy;
	
	hasil = *pointx * *pointx, *pointy-1;
	
	cout << endl;
	cout << *pointx << " Dipangkatkan " << *pointy << " = " << hasil << endl;
	return 0;
}
