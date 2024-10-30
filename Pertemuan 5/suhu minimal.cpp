#include <iostream>
using namespace std;

void besar_a (double a[], int b, double& min, int& c) {
 min = a[0];
 for (int i =0; i< b; i++){
  if (a [i] < min){
   min = a[i];
   c = i;
  }
 }
}

int main (){
 double suhu [5];
 double min;
 int i, k;
 
 //membaca data dari keyboard dan menyimpan ke array suhu
 cout << "Masukkan data suhu untuk 5 hari" << endl;
 for (i=0 ; i <5; i++){
  cout << "Hari ke-" << i+1 << " : ";
  cin >> suhu[i];
 }
 
 //menampilkan isi array suhu
 cout << endl << "Data suhu yang anda masukkan : " << endl;
 for (i=0; i < 5; i++){
  cout << "Data suhu hari ke " << i+1 << " = " << suhu[i] << endl;
 }
 
 cout << endl << endl;
 
 //mencari suhu tertinggi dengan memanggil fungsi besar_a
 besar_a (suhu, 5, min, k);
 
 //menampilkan suhu tertinggi dan kapan terjadinya
 cout << "Suhu terendah terjadi pada hari ke " << k+1 << " yaitu " << min;
 
 return 0;
}
