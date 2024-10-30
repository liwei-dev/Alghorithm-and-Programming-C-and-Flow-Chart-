//82520053_Fedriko Artya Ruvi
//825220072_Rafael Davrio Sutra
//82520079_Zicho Octozeus Tan
//8252200_Delon Christoper Tandy
//825220095_Jourdan tanardi

#include <iostream> //library
using namespace std;

int main(){ //algoritma utama
  	int desimal, biner = 0, remainder, produk = 1; //mendeklarsi variabel dengan tipe integer
  	
  	// Karena tipe datanya adalah int, ia hanya dapat menerima nilai hingga 1023 sebelum beralih ke long.
  	cout << "Masukan angka desimal : "; //meminta user untuk menginput angka desimal
  	cin >> desimal; //menerima input angka dari user
  	
  	while (desimal != 0) { //while itu merupakan rumus, dimana rumus ini akan berjalan sesuai dengan kondisi yaitu desimal != 0)
    	remainder = desimal % 2; //rumus remainder
    	biner = biner + (remainder * produk); //rumus untuk mencari biner
    	desimal = desimal / 2; //untuk bentuk biner
    	produk *= 10; //pointer/menunjuk nilai alamat produk berupa 10
  		}
  	
	cout << "The number in the binary form is: " << biner ; //menampilkan hasil akhir dri desimal ke biner
  	
  return 0;
}
