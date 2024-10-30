#include <bits/stdc++.h>
#include <string>

using namespace std;

int main (){
	char n;
	int a = 40000;
	int b = 70000;
	int c = 120000;
	int d = 150000;
	int e = 200000;
	char p;
	int h1;
	int h2;
	int i;
	
	cout << "--------FORM PERMESANAN---------" << endl;
	cout << "Masukkan Nama Penyewa: ";
	cin >> n;
	
	cout << "SELAMAT DATANG DI RESTORAN 'KAMI'" << endl << endl;
	cout << "Pilihan Menu Paket Yang Tersedia: " << endl;
    cout << "a. Paket Kenyang (nasi, ayam goreng, es teh)" << endl;
    cout << "b. Paket Ambyar (nasi, ayam goreng 2, tahu, es teh)" << endl;
    cout << "c. Paket Threesome (nasi 3, ayam goreng 3, es teh 3)" << endl;
    cout << "d. Paket Maruk (nasi 3, ayam goreng 3, es teh 3, tahu 3, tempe 3)" << endl;
    cout << "e. Paket Gangbang (6 ayam goreng, 6 nasi)" << endl << endl;
    cout << "Masukkan jenis paket makanan yang diinginkan: ";
    cin >> p;
    
		    
    switch(p){
        case 'a' : {
        	h1 = a * 1;
            h2 = a + (a * 0.1);
            cout << " Harga sebelum dikenakan pajak sebesar 10%: Rp. " << h1 << endl; 
            cout << " Harga setelah dikenakan pajak sebesar 10% : Rp. " << h2;
        }
        case 'b' : {
        	h1 = b * 1;
            h2 = b + (b * 0.1);
            cout << " Harga sebelum dikenakan pajak sebesar 10%: Rp. " << h1 << endl; 
            cout << " Harga setelah dikenakan pajak sebesar 10%: Rp. " << h2;
        }
        case 'c' : {
        	h1 = c * 1;
            h2 = c + (c * 0.1);
            cout << " Harga sebelum dikenakan pajak sebesar 10%: Rp. " << h1 << endl; 
            cout << " Harga setelah dikenakan pajak sebesar 10%: Rp. " << h2;
        }
        case 'd' : {
			h1 = d * 1;
            h2 = d + (d * 0.1);
            cout << " Harga sebelum dikenakan pajak sebesar 10%: Rp. " << h1 << endl; 
            cout << " Harga setelah dikenakan pajak sebesar 10%: Rp.. " << h2;
        }
        case 'e' : {
        	h1 = e * 1;
            h2 = e + (e * 0.1);
            cout << " Harga sebelum dikenakan pajak sebesar 10%: Rp. " << h1 << endl; 
            cout << " total harga yang harus dibayarkan adalah : Rp. " << h2;
        }
        default : {
        	cout << "Menu tidak tersedia";
			break;
		}
					
	}
	return 0;
}
