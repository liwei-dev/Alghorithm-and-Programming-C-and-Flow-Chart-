#include <iostream>
using namespace std;

int main () {
 float km, liter, i, j, rata, efisiensi;
 
 i=0;
 // loop untuk jumlah data
 while (i<5) { //Loop jarak
  cout << "jarak tempuh : ";
  cin >> km;
  j = 1;
  efisiensi = 0;
  //Loop untuk input pemakaian bensin
  while (j<=1) {
   cout << "jumlah pemakaian bensin : ";
   cin >> liter; 
   efisiensi = km / liter;
   j++; //increment untk memproses data berikutnya
  } //loop dalam
  rata = efisiensi / 5;
  cout << endl;
  cout << "rata-rata efisiensi : " << rata << endl << endl;
  i++; //increment untk memproses data berikutnya
 }
 
 return 0;
}
