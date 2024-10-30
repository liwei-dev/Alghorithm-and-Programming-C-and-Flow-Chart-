#include <iostream>
using namespace std;

int main (){
 int n, c= 1;
 int baru= 0, biaya = 0, total = 0;
 char jawab;
 
 //input
 cout << "Banyaknya DVD: ";
 cin >> n;
 do {
  cout << "Apakah film baru? (y/t)";
  cin >> jawab;
  if (jawab ==  'Y' || jawab == 'y'){
   baru = baru +500;
  }
  if (c%3 == 0){
   cout << "DVD ini gratis biaya sewa" << endl;
   continue;
  }
  biaya += 2000;
 } while (c++ < n);
 
 //menghitung total biaya
 total = biaya + baru;
 cout << endl;
 cout << "Banyaknya DVD = " << n << endl;
 cout << "Total biaya sewa = Rp " << total << endl;
 
 return 0;
}
