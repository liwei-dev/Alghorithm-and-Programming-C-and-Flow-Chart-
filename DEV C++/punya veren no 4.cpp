#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main () {
 char kursi[15][6];
 
 //deklarasi untuk switchcase
 int pilihan, A, B, C, D, E, F, b;
 
 //deklarasi untuk baris & kolom
 int y, z, n, k, l, m, i, j; 
 
 //Judul
 cout << " PROGRAM MEMBELI TIKET PESAWAT " << endl;
 
 //deklarasi menampilkan tabel ( 15 baris & 6 kolom ) 
for (int i = 0; i < 15; i++){
for (int j = 0; j < 6; j++)

  kursi[i][j] = '*'; 
 }

 //mengubah * dengan X ( untuk menampilkan tabel berisi * & X secara random )  
 srand(time(0));
  for (int i = 0; i < 10; i++ ){
   y = rand()%10;
   z = rand()%10;
   kursi[y][z] = 'X';
  }
 
 //membuat tabel
 cout << "A B C D E F G "<< endl;
 for (int i = 0; i < 15; i++) {
  cout << "Baris = " << i+1 << " ";
  for (int j = 0; j < 6; j++) {
   cout << kursi[y][z] << endl;
  }

    cout << "Pilih Baris Kursi Yang Tersedia (1-15) : ";
    cin >> n;
    
    cout << "Pilih kolom Kursi Yang Tersedia (A-F) : ";
    cin >> pilihan;

    switch(pilihan){
        case 'A' :{
            A = b;
            b = 1;
            break;
        }
        case 'B' :{
            B = b;
            b = 2;
            break;
        }
        case 'C' :{
            C = b;
            b = 3;
            break;
        }
        case 'D' :{
            D = b;
            b = 4;
            break;
        }
        case 'E' :{
            E = b;
            b = 5;
            break;
        }
        case 'F' :{
            F = b;
            b = 6;
            break;
        }
        default :{
            cout << "Tidak valid";
            break;
        }
    }

    k = m - 1;
    l = n - 1;
    kursi[k][l] = 'X';

    cout << "\t\tA\tB\tC\tD\tE\tF\t" << endl;
    for (int i = 0; i < 15; i++ ){
        cout << "Baris " << i+1 << " ";
           for (int j = 0; j < 6; j++)
           cout << "\t" << kursi [y][z];
           cout << endl;

    }
    return 0;

}
}
