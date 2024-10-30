#include <iostream>
using namespace std;

int main (){
	int kata [50];
	float matkul;
	float nilaiakhir;
	float jumlah;
	int i;
	int j;
	

	j = 0;
	i = 0;
	nilaiakhir = 0;
//looping nama mahasiswanya akan berhenti jika menginput SELESAI
	do {
		cout << "Nama Mahasiswa = " << j+1;
		cin >> kata;
		cout << "Jumlah Matakuliah = ";
		cin >> jumlah;
		
		cout << "Matakuliah ke-" << i+1 << " = ";
		cin >> matkul;
		nilaiakhir = nilaiakhir + matkul;
		j = j+1;
		i = i+1;
		
	}
	while (i < jumlah, j < kata);
	
	nilaiakhir = nilaiakhir/jumlah;
   
   

return 0;
}
