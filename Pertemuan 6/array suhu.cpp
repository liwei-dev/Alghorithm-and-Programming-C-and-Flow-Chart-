#include <iostream>
using namespace std;

void besar_a (double a[], int b, double& maks, int& c) {
 maks = 0;
 for (int i = 0; i < b; i++) {
  if (maks <= a[i]) {
   maks = a[i];
   c = i;
  }
 }
}

int main () {
 double suhu[5];
 double maks;
 int i, k;
 
 //membaca data dari keyboard dan menyimpan ke array suhu
 cout << "Masukkan data suhu untuk 5 hari" << endl;
 for (i = 0; i < 5; i++ ) {
  cout << "Hari ke-" << i+1 << " : ";
  cin >> suhu[i];
 }
 
 //menampilkan isi array suhu
 cout << "Data suhu yang anda masukkan : " << endl;
 for (i=0; i < 5; i++) {
  cout << "Data suhu hari ke " << i+1 << " = " << suhu[i] << endl;
 } 
 
 cout << endl << endl;
 
 //Mencari suhu tertinggi dengan memanggil fungsi besar_a
 besar_a(suhu, 5, maks, k);
 
 //Menampilkan suhu tertinggi dan kapan terjadinya
 cout << "Suhu tertinggi terjadi pada hari ke " << k+1 << " yaitu  " << maks << endl;
 
 return 0;
}
