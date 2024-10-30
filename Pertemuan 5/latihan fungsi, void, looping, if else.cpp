#include <iostream>
using namespace std;

double tugas (double a){
	return (a * 0.3);
}
double uts (double b){
	return (b * 0.3);
}
double uas (double c){
	return (c * 0.4);
}
void penentuan (double nilai, double& x, double& y, double& z){
	if (nilai >= 70){
	cout << "Selamat, anda dinyatakan LULUS";
			x = x + 1;}
	
	else if (nilai >= 50 && nilai < 70){
	cout << "Lakukan perbaikkan nilai dengan TES PERBAIKKAN";
			y = y + 1;}
	
	else if (nilai < 50){
	cout << "Maaf, anda dinyatakan TIDAK LULUS";
			z = z + 1;}
}

int main (){
	double a, b, c, nilai;
	int jumlah, x, y, z;
	
	cout << "**Program Penentuan Kelulusan Siswa Berdasarkan Hasil Tes**" << endl << endl;
		cout << "Masukkan jumlah siswa = ";
		cin >> jumlah;
		cout << "Daftar nilai" << endl;
		
	for (int i = 1; i <= jumlah; i++) {
		cout << "Tugas : ";
		cin >> a;
		cout << "UTS : ";
		cin >> b;
		cout << "UAS : ";
		cin >> c;
		nilai = tugas (a) + uts (b) + uas (c);
		penentuan (nilai, a, b, c);
	}
	cout << "Jumlah siswa yang lulus ada " << x << " orang" << endl;
	cout << "Jumlah siswa yang melakukan tes perbaikkan ada " << y << " orang" << endl;
	cout << "Jumlah siswa yang tidak lulus ada " << z << " orang" << endl;
	
return 0;
}

