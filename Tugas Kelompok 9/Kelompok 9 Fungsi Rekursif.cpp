#include <iostream>
using namespace std;

// PROJEK MEMBUAT PROGRAM REKURSIF
// KELOMPOK 9, Anggotanya:
// Li Wei_825220054
// Michael Tristan Pramono_825220071
// Nicolas Phi_825220075
// Khania Luiza Cahya Tuluswati_825220078
// Cecillia Cherish Mardjuki_825220090

long int p_r(int x, int y){
	if (y==0){
		return 1;
	}
	else{
		return (x * p_r(x,y-1));
	}
                 
}

int main(){
	
	int x,y;
	cout << "\n	************************************** \n";
	cout << "	** PROGRAM UNTUK MENGHITUNG PANGKAT ** \n";
	cout << "	************************************** \n\n";
	cout << endl;
	cout << "Masukan Nilai X (nilai yang akan dipangkatkan) = ";
	cin >> x;
	
	cout << "Masukan Nilai Y (nilai yang akan menjadi pangkatnya) = ";
	cin >> y;
	cout << endl;
	cout << x << " Dipangkatkan " << y << " = " << p_r(x,y) << endl;
	return 0;
}



