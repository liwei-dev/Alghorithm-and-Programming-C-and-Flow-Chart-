#include <bits/stdc++.h>

using namespace std;

//Kelompok 2:
//Li Wei_825220054
//Hansen Christian Lie_825220061
//Gustian Rosadi_825220065

struct Nilai {
	int tugas, uts, uas, bobot;
};

struct Mahasiswa {
	string nama1, nama2, npm, predikat;
	Nilai nilai;
};

int main () {
 	Mahasiswa mahasiswa;
 	string matkul;

 	cout << "Input Mata Kuliah: "; 
	cin >> matkul;
 
 	ifstream data;
 	data.open("Nilaisiswa.txt");

 	ofstream Ofile ("Nilaisiswa-Hasil.txt");
 	Ofile << "Nilai Mata Kuliah " << matkul;
 	Ofile << "\n___________________________________________________________________________"
	 	  << "\n  NO |    NIM    |   	 	Nama		  |Tugas| UTS | UAS |Bobot|Huruf|" << endl
    	  << "---------------------------------------------------------------------------" << endl;
       
 	for (int i = 0; i < 33; i++) {
  	data >> mahasiswa.npm >> mahasiswa.nama1 >> mahasiswa.nama2 >> mahasiswa.nilai.tugas >> mahasiswa.nilai.uts >> mahasiswa.nilai.uas;
    mahasiswa.nilai.bobot = mahasiswa.nilai.tugas * 0.3 + mahasiswa.nilai.uts * 0.3 + mahasiswa.nilai.uas * 0.4;
  
   	if (80 <= mahasiswa.nilai.bobot && mahasiswa.nilai.bobot <= 100) {
   	mahasiswa.predikat = 'A';
    
   	} 
  	else if (70 <= mahasiswa.nilai.bobot && mahasiswa.nilai.bobot < 80){
    mahasiswa.predikat = 'B';
   
   	}
   	else if (56 <= mahasiswa.nilai.bobot && mahasiswa.nilai.bobot < 70){
    mahasiswa.predikat = 'C';
   
   	}
   	else if (45 <= mahasiswa.nilai.bobot && mahasiswa.nilai.bobot < 56){
    mahasiswa.predikat = 'D';
   
   	}
   	else if (mahasiswa.nilai.bobot < 45){
    mahasiswa.predikat = 'E';

  	}
  
 	Ofile 
 	 << setw(4) << i+1 << " |"
     << setw(10) << mahasiswa.npm << " |"
     << setw(10) << mahasiswa.nama1 << setw(12)  << mahasiswa.nama2 << "\t " << " |"
     << setw(1) << mahasiswa.nilai.tugas << "\t " << " |"
     << setw(1) << mahasiswa.nilai.uts << "\t " << " |"
     << setw(1) << mahasiswa.nilai.uas << "\t " << " |"
     << setw(1) << mahasiswa.nilai.bobot << "\t " << " |"
     << setw(1) << mahasiswa.predikat << "\t " << " |" << endl;
 	}
 
	data.close();
 
 	Ofile << "===========================================================================" << endl;
 	Ofile.close();
 
 	return 0;
}
