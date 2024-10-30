#include <bits/stdc++.h>
using namespace std;

int main (){
 int jumlah;
 float nilaitotal = 0;
 float ratarata  = 0;
 int banyak [6];
 
 for (int i = 0; i < 6; i++){
  banyak [i]=0;
 }
 
 cout << "Masukkan banyaknya siswa = ";
 cin >> jumlah;
 cout << endl;
 
 string nama [jumlah];
 float nilai [jumlah];
 char predikat [jumlah];
 
 for (int i=0; i < jumlah; i++){
  cout << "Siswa ke-" << i+1 << endl;
  cout << "Nama siswa = ";
  cin >> nama[i];
  cout << "Nilai   =";
  cin >> nilai[i];
  
  if (90 <= nilai[i] && nilai[i] <= 100) {
   predikat[i] = 'A';
   banyak[0] = banyak[0]+1;
  } 
  else if (80 <= nilai[i] && nilai[i] <= 89.99){
   predikat[i] = 'B';
   banyak[1] = banyak[1]+1;
  }
  else if (70 <= nilai[i] && nilai[i] <= 79.99){
   predikat[i] = 'C';
   banyak[2] = banyak[2]+1;
  }
  else if (60 <= nilai[i] && nilai[i] <= 69.99){
   predikat[i] = 'D';
   banyak[3] = banyak[3]+1;
  }
  else if (50 <= nilai[i] && nilai[i] <= 59.99){
   predikat[i] = 'E';
   banyak[4] = banyak[4]+1;
  }
  else if (0 <= nilai[i] && nilai[i] <= 49.99){
   predikat[i] = 'F';
   banyak[5] = banyak[5]+1;
  }
  nilaitotal = nilaitotal + nilai [1];
  ratarata = nilaitotal/jumlah;
  cout << endl;
 }

cout << "\n Tabel Daftar Nilai Mahasiswa	" << endl;
cout << "---------------------------------------" << endl;
cout << "No\tNama\t\tNilai\tPredikat\t" << endl;
cout << "=======================================" << endl;

for (int i = 0; i < jumlah; i++){
	cout  << i+1 << "\t" << nama[i] << "\t\t" << nilai[i] << "\t	" << predikat [i] << endl;
}
cout << "\nRata-rata nilai dari seluruh siswa adalah " << ratarata << endl;

for (int i = 0; i < 1; i++){
	char alfabet = 'A';
	for (int j = i; j < 6; j++){
		cout << "Banyak siswa yang mendapat nilai dengan predikat " << alfabet++ << " ada " << banyak[i] << " orang " << endl;
		i++;
	}
	return 0;
}
}
