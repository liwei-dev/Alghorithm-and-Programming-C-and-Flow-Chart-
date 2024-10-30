#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
 	string nama[20], predikat[20];
 	int nilai[20];

 	cout << "Masukan Jumlah Data = ";
 	cin >> n;
 	cout << endl;

 	for (int i=0; i<n; i++) {
  	cout << endl;
  
  	cout << "Data ke-"<<i+1<<endl;
  	cout << "Masukan Nama = ";
  	cin >> nama[i];
  	cout << "Masukan Nilai = ";
  	cin >> nilai[i];
  
  	if (nilai[i] >= 90 && nilai[i] <= 100){
	predikat[i] = "A";
	cout << "Kelompok nilai = A" << endl;}
	else if (nilai[i] >= 80 && nilai[i] <= 89.99){
	predikat[i] = "B";
	cout << "Kelompok nilai = B" << endl;}
	else if (nilai[i] >= 70 && nilai[i] <= 79.99){
	predikat[i] = "C";
	cout << "Kelompok nilai = C" << endl;}
	else if (nilai[i] >= 60 && nilai[i] <= 69.99){
	predikat[i] = "D";
	cout << "Kelompok nilai = D" << endl;}
	else if (nilai[i] >= 50 && nilai[i] <= 59.99){
	predikat[i] = "E";
	cout << "Kelompok nilai = E" << endl;}
	else if (nilai[i] >= 0 && nilai[i] <= 49.99){
	predikat[i] = "F";
	cout << "Kelompok nilai = F" << endl;}
 }
 cout << endl;
 cout << "DAFTAR NILAI MAHASISWA"<<endl;
 cout << "-------------------------------------------" <<endl;
 cout << "No    Nama           Nilai           Perdikat" <<endl;
 cout << "-------------------------------------------" <<endl;

 for (int i=0; i<n; i++) {
 cout << i + 1 << "			" << nama[i] << "					" << nilai[i] << "					" <<predikat[i] << endl;
 cout <<"---------------------------------------------------------------------------------------------------------" << endl;
 }

return 0;
}
