#include <iostream>
using namespace std;

int main () {
	int nilai;
	int tugas;
	int uts;
	int uas;
	int nilaitugas;
	int nilaiuts;
	int nilaiuas;
	
	//judul
	cout << " Program untuk menentukan mahasiswa lulus, tes perbaikkan, tidak lulus " << endl;
	
	//input
	cout << "Masukan nilai Tugas : ";
	cin >> nilaitugas;
	cout << "Masukan nilai UTS : ";
	cin >> nilaiuts;
	cout << "Masukan nilai UAS : ";
	cin >> nilaiuas;
	
	//hitunglah
	tugas = nilaitugas * 0.30;
	uts = nilaiuts * 0.30;
	uas = nilaiuas * 0.40;
	nilai = tugas + uts + uas;
	
	
	//tampilkan
	if (nilai >= 70 && nilai <= 100){
		cout << endl << "lulus";
		cout << endl << "Nilai Total : " << nilai;
	}
	else if(nilai >= 50 && nilai < 70 ){
		cout << endl << "tes perbaikkan";
		cout << endl << "Nilai Total : " << nilai;

	}
	else if(nilai >= 0 && nilai < 50 ){
		cout << endl << "tidak lulus";
		cout << endl << "Nilai Total : " << nilai;
	}	
	else {
		cout << "Input tidak valid";
	}
	

	return 0;
}
	
