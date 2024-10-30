#include<iostream>
using namespace std;

int main () {
	const double a = 200000;
	const double b = 350000;
	const double c = 500000;
	const double d = 750000;
	char nama[20];
	int hari;
	int t_harga;
	int t_hargappn;
	char pilihan;
	
	//judul
	cout << " Program untuk menghitung biaya menginap di Wisma Tenang " << endl << endl;
	
	//input
	cout << " Masukan nama tamu : ";
	cin >> nama;
	cout << endl;
	cout << " lama hari menginap : ";
	cin >> hari;
	cout << endl;
	cout << "Pilihan kamar : " << endl;
    cout << "a. kamar single" << endl;
    cout << "b. kamar double" << endl;
    cout << "c. kamar keluarga" << endl;
    cout << "d. kamar VIP" << endl;
    cout << "pilihan : ";
    cin >> pilihan;
    
    //memilih, menghitung, dan menampilkan
    switch(pilihan){
        case 'a' : {
            t_harga = hari * a; 
            t_hargappn = t_harga + t_harga * 15/100;
            cout << " total harga yang harus dibayarkan adalah : Rp. " << t_hargappn;
            break;
        }
        case 'b' : {
            t_harga = hari * b; 
            t_hargappn = t_harga + t_harga * 15/100;
            cout << " total harga yang harus dibayarkan adalah : Rp. " << t_hargappn;
            break;
        }
        case 'c' : {
            t_harga = hari * c; 
            t_hargappn = t_harga + t_harga * 15/100;
            cout << " total harga yang harus dibayarkan adalah : Rp. " << t_hargappn;
            break;
        }
        case 'd' : {
            t_harga = hari * d; 
            t_hargappn = t_harga + t_harga * 15/100;
            cout << " total harga yang harus dibayarkan adalah : Rp. " << t_hargappn;
            break;
        }
        default : {
        	cout << "pilihan tidak valid";
			break;
		}
    }
	
	return 0;
	
}
