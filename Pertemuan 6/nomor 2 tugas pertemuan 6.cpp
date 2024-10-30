#include <iostream>
#include <stdlib.h>
#include <time.h> 
using namespace std;

int main(){ 
    char kursi[15][6];
    int baris[15];
    int a, b, k, h, l;
    int x;
    char pilihan;

//Loop untuk tabel pilihan
    for (int i = 0; i < 15; i++ ){
     for (int j = 0; j < 6; j++)
     kursi[i][j] = '*';
 }
 
//Loop untuk variabel x
 srand(time(0));
 for (int i = 0; i < 30; i++){
     a = rand()%10;
     b = rand()%10;
     kursi[a][b] = 'X';
    }

//Loop untuk membuat *
cout << "\t\t" << "A\t" << "B\t" << "C\t" << "D\t" << "E\t" << "F\t" << endl;
    for (int i = 0; i < 15; i++ ){
    cout << "Baris " << i+1 << " ";
    for (int j = 0; j < 6; j++)
    cout <<  "\t" << kursi[i][j];
  	cout << endl;
}
cout << endl;
//Masukkan jenis kelas
cout << "Pilih tipe kelas yang diinginkan (A/B/C/D/E/F) : ";
cin >> pilihan;
 
int ascii = int(pilihan);
k = ascii - 65;
 
if (65 > ascii || ascii > 70){
	do{
	cout << "Input tidak sesuai!" << endl;
	cout << "Pilih tipe kelas yang diinginkan (A/B/C/D/E/F) : ";
	cin >> pilihan;
	int ascii = int(pilihan);
	k = ascii - 65;
}
while(0 > k || k > 5);
}
 
cout << "Pilih baris yang diinginkan (1-15) : ";
cin >> x;
h = x-1;
 
if (0 > h || h > 14){
	do{
	cout << "Input tidak sesuai!" << endl;
	cout << "Pilih baris yang diinginkan (1-15) : ";
	cin >> h;
	l = h-1;
}
while(0 > l || l > 14 );
 h = h-1;
}
 
kursi[h][k] = 'X';
cout << endl;

if (kursi[a][b] != kursi[h][k]){
cout << "Anda berhasil memesan kursi " << pilihan << x << "!" << endl;
}
 
else if (kursi[a][b] = kursi[h][k]){
cout << "Kursi telah dipesan!" << endl;
}
 
//Loop untuk menampilkan *
cout << "\t\t" << "A\t" << "B\t" << "C\t" << "D\t" << "E\t" << "F\t" << endl;
	for (int i = 0; i < 15; i++ ){
    cout << "Baris " << i+1 << " ";
    for (int j = 0; j < 6; j++)
    cout <<  "\t" << kursi[i][j];
    cout << endl;
}

return 0;
}
