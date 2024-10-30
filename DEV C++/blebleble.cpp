#include <bits/stdc++.h>
#include <string>
using namespace std;

// PROJEK MEMBUAT PROGRAM APLIKASI
// KELOMPOK 9, Anggotanya:
// Li Wei_825220054
// Michael Tristan Pramono_825220071
// Nicolas Phi_825220075
// Khania Luiza Cahya Tuluswati_825220078
// Cecillia Cherish Mardjuki_825220090


//harga per malam, pajak, jumlah hari sewa
float room_a (float harga, int harisewa){
	return ((harga * harisewa) + ((harga * harisewa) * 0.1));
}

float room_b (float harga, int harisewa){
	return ((harga * harisewa) + ((harga * harisewa) * 0.1));
}

float room_c (float harga, int harisewa){
	return ((harga * harisewa) + ((harga * harisewa) * 0.1));
}

float room_d (float harga, int harisewa){
	return ((harga * harisewa) + ((harga * harisewa) * 0.1));
}

float room_e (float harga, int harisewa){
	return ((harga * harisewa) + ((harga * harisewa) * 0.1));
}

void booking (int i){
	char nama [10][50];
	char pilihan;
	const double a = 250000;
	const double b = 350000;
	const double c = 500000;
	const double d = 750000;
	const double e = 900000;
	int harisewa;
	int totalharga;
	int hargaawal;
	char pilihan2;
	int lamaInap [10];
	char kamar [10];
	double bayar[10];

	cout << "Masukkan Nama Penyewa: ";
	cin >> nama[i];
	
	cout << "Masukkan Lama Hari Menginap: ";
	cin >> harisewa;
	lamaInap[i] = harisewa;
	cout << "Pilihan Kamar Yang Tersedia: " << endl;
    cout << "a. Standard Room (1 Bed)" << endl;
    cout << "b. Superior Room (2 Beds)" << endl;
    cout << "c. Deluxe Room (3 Beds)" << endl;
    cout << "d. Suite Room" << endl;
    cout << "e. Presidential Suite Room" << endl << endl;
    cout << "Masukkan jenis ruangan yang diinginkan: ";
    cin >> pilihan;
    kamar[i] = pilihan;
		    
    switch(pilihan){
        case 'a' : {
        	hargaawal = a * harisewa;
            totalharga = room_a (a, harisewa);
            cout << " Harga sebelum dikenakan pajak sebesar 10%: Rp. " << hargaawal << endl; 
            cout << " total harga yang harus dibayarkan adalah : Rp. " << totalharga;
            bayar[i] = totalharga;
            break;
        }
        case 'b' : {
        	hargaawal = b * harisewa;
            totalharga = room_b (b, harisewa);
            cout << " Harga sebelum dikenakan pajak sebesar 10%: Rp. " << hargaawal << endl; 
            cout << " total harga yang harus dibayarkan adalah : Rp. " << totalharga;
            bayar[i] = totalharga;
            break;
        }
        case 'c' : {
        	hargaawal = c * harisewa;
            totalharga = room_c (c, harisewa);
            cout << " Harga sebelum dikenakan pajak sebesar 10%: Rp. " << hargaawal << endl; 
            cout << " total harga yang harus dibayarkan adalah : Rp. " << totalharga;
            bayar[i] = totalharga;
            break;
        }
        case 'd' : {
        	hargaawal = d * harisewa;
            totalharga = room_d (d, harisewa);
            cout << " Harga sebelum dikenakan pajak sebesar 10%: Rp. " << hargaawal << endl; 
            cout << " total harga yang harus dibayarkan adalah : Rp. " << totalharga;
            bayar[i] = totalharga;
            break;
        }
        case 'e' : {
        	hargaawal = e * harisewa;
            totalharga = room_e (e, harisewa);
            cout << " Harga sebelum dikenakan pajak sebesar 10%: Rp. " << hargaawal << endl; 
            cout << " total harga yang harus dibayarkan adalah : Rp. " << totalharga;
            bayar[i] = totalharga;
            break;
        }
        default : {
        	cout << "pilihan tidak valid";
        	bayar[i] = 0;
			break;
		}
					
	}
}

int main (){
	char pilihan2;
	int i=0;
	

	cout << "	******************* HOTEL 9 ******************* \n";
	cout << "	** Jl. Semoga Lulus No.99 Telp (0825)220000  ** \n";
	cout << "	**  DKI Jakarta, Kota Jakarta Barat 825222   ** \n";
	cout << "	*********************************************** \n\n";
	cout << endl;
	booking (i);
	cout << endl << "\nApakah anda ingin memesan lagi? (Y/N) " ;
	cin >> pilihan2;
	cout << endl;
	
	while(pilihan2 == 'Y'||pilihan2 == 'y'){
		i++;
		booking (i);
		
		cout << endl << "\nApakah anda ingin memesan lagi? (Y/N): " ;
		cin >> pilihan2;
		
		if(pilihan2 == 'N'||pilihan2 == 'n'){
			cout << endl;
			cout << "Terima Kasih sudah membeli";
			break;
		}
	}	
				
	return 0;
}
