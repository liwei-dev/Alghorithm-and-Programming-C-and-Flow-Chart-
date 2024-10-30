#include <bits/stdc++.h>
#include <string>

using namespace std;

//struct data jenis ruangan hotel yang tersedia beserta harganya
struct jeniskamar{
	const double a = 250000;
	const double b = 350000;
	const double c = 500000;
	const double d = 750000;
	const double e = 900000;
};

//struct data untuk menyimpan hari penyewaan
struct sewa{
	int harisewa;
};

//struct untuk looping menanyakan apakah pembeli ingin memesan lagi
struct looping{
	char pilihan2;
};

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
	jeniskamar jk;
	sewa sk;
	int totalharga;
	int hargaawal;
	char pilihan2;
	int lamaInap [10];
	char kamar [10];
	double bayar[10];

	cout << "Masukkan Nama Penyewa: ";
	cin >> nama[i];
	
	cout << "Masukkan Lama Hari Menginap: ";
	cin >> sk.harisewa;
	lamaInap[i] = sk.harisewa;
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
        	hargaawal = jk.a * sk.harisewa;
            totalharga = room_a (jk.a, sk.harisewa);
            cout << " Harga sebelum dikenakan pajak sebesar 10%: Rp. " << hargaawal << endl; 
            cout << " total harga yang harus dibayarkan adalah : Rp. " << totalharga;
            bayar[i] = totalharga;
            break;
        }
        case 'b' : {
        	hargaawal = jk.b * sk.harisewa;
            totalharga = room_b (jk.b, sk.harisewa);
            cout << " Harga sebelum dikenakan pajak sebesar 10%: Rp. " << hargaawal << endl; 
            cout << " total harga yang harus dibayarkan adalah : Rp. " << totalharga;
            bayar[i] = totalharga;
            break;
        }
        case 'c' : {
        	hargaawal = jk.c * sk.harisewa;
            totalharga = room_c (jk.c, sk.harisewa);
            cout << " Harga sebelum dikenakan pajak sebesar 10%: Rp. " << hargaawal << endl; 
            cout << " total harga yang harus dibayarkan adalah : Rp. " << totalharga;
            bayar[i] = totalharga;
            break;
        }
        case 'd' : {
        	hargaawal = jk.d * sk.harisewa;
            totalharga = room_d (jk.d, sk.harisewa);
            cout << " Harga sebelum dikenakan pajak sebesar 10%: Rp. " << hargaawal << endl; 
            cout << " total harga yang harus dibayarkan adalah : Rp. " << totalharga;
            bayar[i] = totalharga;
            break;
        }
        case 'e' : {
        	hargaawal = jk.e * sk.harisewa;
            totalharga = room_e (jk.e, sk.harisewa);
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
	looping dlc;
	int i=0;
	
	cout << "	******************* HOTEL 9 ******************* \n";
	cout << "	** Jl. Semoga Lulus No.99 Telp (0825)220000  ** \n";
	cout << "	**  DKI Jakarta, Kota Jakarta Barat 825222   ** \n";
	cout << "	*********************************************** \n\n";
	cout << endl;
	booking (i);
	cout << endl << "\nApakah anda ingin memesan lagi? (Y/N) " ;
	cin >> dlc.pilihan2;
	cout << endl;
	
	while(dlc.pilihan2 == 'Y'||dlc.pilihan2 == 'y'){
		i++;
		booking (i);
		
		cout << endl << "\nApakah anda ingin memesan lagi? (Y/N): " ;
		cin >> dlc.pilihan2;
	}
	
	if(dlc.pilihan2 == 'N'||dlc.pilihan2 == 'n'){
		cout << endl;
		cout << "Terima Kasih sudah membeli";
	}
		
				
	return 0;
}
