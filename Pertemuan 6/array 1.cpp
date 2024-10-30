#include <iostream>
using namespace std;

int main () {
double suhu1[5] = {31.5, 33, 42, 52, 55.2};
double suhu2[] = {31.5, 33, 42, 52, 55.2, 60};
double suhu3[5] = {29.6, 30.5};
double suhu4[5];
int i;

 cout << "Masukkan 5 data : " << endl;
 for (i = 0; i < 5; i++) {
 cin >> suhu4[i]; 
 }
 cout << endl << "Komponen array suhu 1:" << endl;
  for (i = 0; i < 4; i++) {
  cout << "Data ke " << i+1 << " = " << suhu1[i] << endl;
 }
 cout << endl << endl;
  for (i = 0; i < 6; i++) {
  cout << "Data ke " << i+1 << " = " << suhu2[i] << endl;
 }
 cout << endl << endl;
  for (i = 0; i < 5; i++) {
  cout << "Data ke " << i+1 << " = " << suhu3[i] << endl;
 }
 cout << endl << endl;
  for (i = 0; i < 5; i++) {
  cout << "Data ke " << i+1 << " = " << suhu4[i] << endl;
 }
 
 cout << endl << "Data ke 3 dari suhu1 adalah " << suhu1[3] << endl;
 
return 0;
}
