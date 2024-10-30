#include <conio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <windows.h>

using namespace std;

struct waktu{
	char duduk [6][7];
};
struct tanggal{
	waktu waktu [3];
};
struct rute{
	tanggal tanggal [4];
};

struct data{
	char nama [50], rute [31], tanggal [50], waktu [20], pembayaran [20];
	int jml, total, harga;
};

void cetakkursi(rute rute[], int pilrute, int piltanggal, int pilwaktu){
	char pos[6];
	pos[0] = 'A'; pos[1] = 'B'; pos[2] = 'C'; pos[3] = 'D'; pos[4] = 'E'; pos[5] = 'F';
	cout << "\n	------------------------------------- \n";
	cout << "	----------- BAGIAN DEPAN ------------ \n";
	cout << "	------------------------------------- \n\n";
	cout << "		1 2			3 4 5			6 7	  \n";
	
	for(int k=0; k<6; k++){
		cout << "	" << pos [k] << "	";
		for(int j=0; j<7; j++){
			cout << rute[pilrute].tanggal[piltanggal].waktu[pilwaktu].duduk[k][j] << " ";
			if(j == 1 || j == 4)
			cout << "	";
		}
		cout  << " " << pos[k] << endl;
	}
	
	cout << "\n\t	.------------------------.	";
	cout << "\n	--------------------------------";
	cout << "\n	-------- BAGIAN BELAKANG -------";
}
void cetakrute(int pil){
	if(pil == 1){
		cout << "\n	----------------------------------------------------------" << endl;
		cout << "	-------------------- JAKARTA - SEOUL ---------------------" << endl;
		cout << "	----------------------------------------------------------" << endl;
		cout << "	No.| TANGGAL				| WAKTU						  " << endl;
		cout << "	---|------------------------|----------------------------|" << endl;
		cout << "	1  | 5-10-2022				| 1. 08:30					 |" << endl;
		cout << "	   | 5-10-2022				| 2. 10:30					 |" << endl;
		cout << "	   | 5-10-2022				| 3. 12:30					 |" << endl;
		cout << "	---|-----------------------------------------------------|" << endl;
		cout << "	2  | 15-10-2022				| 1. 04:00					 |" << endl;
		cout << "	   | 15-10-2022				| 2. 13:00					 |" << endl;
		cout << "	   | 15-10-2022				| 3. 18:00					 |" << endl;
		cout << "	---|-----------------------------------------------------|" << endl;
		cout << "	3  | 20-10-2022				| 1. 13:00					 |" << endl;
		cout << "	   | 20-10-2022				| 2. 15:00					 |" << endl;
		cout << "	   | 20-10-2022				| 3. 16:30					 |" << endl;
		cout << "	---|-----------------------------------------------------|" << endl;
		cout << "	4  | 30-10-2022				| 1. 14:30					 |" << endl;
		cout << "	   | 30-10-2022				| 2. 18:00					 |" << endl;
		cout << "	   | 30-10-2022				| 3. 20:30					 |" << endl;
		cout << "	---|-----------------------------------------------------|" << endl;
	}
	else if(pil == 2){
		cout << endl;
		cout << "\n	----------------------------------------------------------" << endl;
		cout << "	-------------------- JAKARTA - TOKYO ---------------------" << endl;
		cout << "	----------------------------------------------------------" << endl;
		cout << "	No.| TANGGAL				| WAKTU						  " << endl;
		cout << "	---|------------------------|----------------------------|" << endl;
		cout << "	1  | 5-10-2022				| 1. 08:30					 |" << endl;
		cout << "	   | 5-10-2022				| 2. 10:30					 |" << endl;
		cout << "	   | 5-10-2022				| 3. 12:30					 |" << endl;
		cout << "	---|-----------------------------------------------------|" << endl;
		cout << "	2  | 15-10-2022				| 1. 04:00					 |" << endl;
		cout << "	   | 15-10-2022				| 2. 13:00					 |" << endl;
		cout << "	   | 15-10-2022				| 3. 18:00					 |" << endl;
		cout << "	---|-----------------------------------------------------|" << endl;
		cout << "	3  | 20-10-2022				| 1. 13:00					 |" << endl;
		cout << "	   | 20-10-2022				| 2. 15:00					 |" << endl;
		cout << "	   | 20-10-2022				| 3. 16:30					 |" << endl;
		cout << "	---|-----------------------------------------------------|" << endl;
		cout << "	4  | 30-10-2022				| 1. 14:30					 |" << endl;
		cout << "	   | 30-10-2022				| 2. 18:00					 |" << endl;
		cout << "	   | 30-10-2022				| 3. 20:30					 |" << endl;
		cout << "	---|-----------------------------------------------------|" << endl;
	}
	else if(pil == 3){
		cout << "\n	----------------------------------------------------------" << endl;
		cout << "	-------------------- JAKARTA - HANOI ---------------------" << endl;
		cout << "	----------------------------------------------------------" << endl;
		cout << "	No.| TANGGAL				| WAKTU						  " << endl;
		cout << "	---|------------------------|----------------------------|" << endl;
		cout << "	1  | 5-10-2022				| 1. 08:30					 |" << endl;
		cout << "	   | 5-10-2022				| 2. 10:30					 |" << endl;
		cout << "	   | 5-10-2022				| 3. 12:30					 |" << endl;
		cout << "	---|-----------------------------------------------------|" << endl;
		cout << "	2  | 15-10-2022				| 1. 04:00					 |" << endl;
		cout << "	   | 15-10-2022				| 2. 13:00					 |" << endl;
		cout << "	   | 15-10-2022				| 3. 18:00					 |" << endl;
		cout << "	---|-----------------------------------------------------|" << endl;
		cout << "	3  | 20-10-2022				| 1. 13:00					 |" << endl;
		cout << "	   | 20-10-2022				| 2. 15:00					 |" << endl;
		cout << "	   | 20-10-2022				| 3. 16:30					 |" << endl;
		cout << "	---|-----------------------------------------------------|" << endl;
		cout << "	4  | 30-10-2022				| 1. 14:30					 |" << endl;
		cout << "	   | 30-10-2022				| 2. 18:00					 |" << endl;
		cout << "	   | 30-10-2022				| 3. 20:30					 |" << endl;
		cout << "	---|-----------------------------------------------------|" << endl;
	}
	else if(pil == 4){
		cout << "\n	----------------------------------------------------------" << endl;
		cout << "	-------------------- JAKARTA - BANGKOK -------------------" << endl;
		cout << "	----------------------------------------------------------" << endl;
		cout << "	No.| TANGGAL				| WAKTU						  " << endl;
		cout << "	---|------------------------|----------------------------|" << endl;
		cout << "	1  | 5-10-2022				| 1. 08:30					 |" << endl;
		cout << "	   | 5-10-2022				| 2. 10:30					 |" << endl;
		cout << "	   | 5-10-2022				| 3. 12:30					 |" << endl;
		cout << "	---|-----------------------------------------------------|" << endl;
		cout << "	2  | 15-10-2022				| 1. 04:00					 |" << endl;
		cout << "	   | 15-10-2022				| 2. 13:00					 |" << endl;
		cout << "	   | 15-10-2022				| 3. 18:00					 |" << endl;
		cout << "	---|-----------------------------------------------------|" << endl;
		cout << "	3  | 20-10-2022				| 1. 13:00					 |" << endl;
		cout << "	   | 20-10-2022				| 2. 15:00					 |" << endl;
		cout << "	   | 20-10-2022				| 3. 16:30					 |" << endl;
		cout << "	---|-----------------------------------------------------|" << endl;
		cout << "	4  | 30-10-2022				| 1. 14:30					 |" << endl;
		cout << "	   | 30-10-2022				| 2. 18:00					 |" << endl;
		cout << "	   | 30-10-2022				| 3. 20:30					 |" << endl;
		cout << "	---|-----------------------------------------------------|" << endl;
	}
}
int main (){
	char pil;
	int pilrute, piltanggal, pilwaktu, pilbaris, pilkursi;
	rute rute[5];
	data data;
	for (int k=0; k<6; k++){
		
		for (int j=0; j<7; j++){
			
			for (int y=0; y<=3; y++){
				rute [y].tanggal[1].waktu[1].duduk[k][j] = '*';
				rute [y].tanggal[1].waktu[2].duduk[k][j] = '*';
				rute [y].tanggal[1].waktu[3].duduk[k][j] = '*';
				rute [y].tanggal[2].waktu[1].duduk[k][j] = '*';
				rute [y].tanggal[2].waktu[2].duduk[k][j] = '*';
				rute [y].tanggal[2].waktu[3].duduk[k][j] = '*';
				rute [y].tanggal[3].waktu[1].duduk[k][j] = '*';
				rute [y].tanggal[3].waktu[2].duduk[k][j] = '*';
				rute [y].tanggal[3].waktu[3].duduk[k][j] = '*';
				rute [y].tanggal[4].waktu[1].duduk[k][j] = '*';
				rute [y].tanggal[4].waktu[2].duduk[k][j] = '*';
				rute [y].tanggal[4].waktu[3].duduk[k][j] = '*';
				
			}
		}
	}
	
	int kursi [8];
	char baris [8];
	char line [100];
	
	ifstream ifile;
	ifile.open("kursi.txt",ios::in);
	
	if (ifile.is_open()){
		
		while (ifile.good()){
			ifile.getline(line,sizeof(line),'|'); //rute
			pilrute = atoi(line);
			
			ifile.getline(line,sizeof(line),'|'); //tanggal
			piltanggal = atoi(line);
			
			ifile.getline(line,sizeof(line),'|'); //waktu
			pilwaktu = atoi(line);
			
			ifile.getline(line,sizeof(line),'|'); //baris
			pilbaris = atoi(line);
			
			ifile.getline(line,sizeof(line),'|'); //kursi
			pilkursi = atoi(line);
			
			rute[pilrute].tanggal[piltanggal].waktu[pilwaktu].duduk[pilbaris][pilkursi] = 'X';
			
		}
	}
	
	ifile.close();
	
	menu:
	system("cls");
	system("color 0");
	cout << "\n\t\t ________________________________________________________";
	cout << "\n\t\t SELAMAT DATANG DI LAYANAN PEMESANAN TIKET PESAWAT ONLINE	\n\n";
	cout << "\t\t	--------------------------------------------------------" << endl;
	cout << "\t\t\t 	PILIHAN YANG TERSEDIA :				" << endl;
	cout << "\t\t	|	1. Rute Perjalanan [Cek Kursi]					   |" << endl;
	cout << "\t\t	|	2. Pesan Tiket									   |" << endl;
	cout << "\t\t	|	3. Keluar										   |" << endl;
	cout << "\t\t	--------------------------------------------------------" << endl;
	cout << "\n\t			Masukkan Pilihan [1-3] : ";
	cin >> pil;
	
//rute perjalanan
	if (pil == '1'){
		pilihan1 :
		system("cls");
		cout << endl;
		cout << "\n PILIH RUTE : \n";
		cout << "	1. JAKARTA - SEOUL \n";
		cout << "	2. JAKARTA - TOKYO \n";
		cout << "	1. JAKARTA - HANOI \n";
		cout << "	1. JAKARTA - BANGKOK \n";
		cout << "	Masukkan Pilihan [1-4] : "; cin >> pilrute;
		
		if(pilrute != 1 && pilrute != 2 && pilrute != 3 && pilrute != 4){
			cout << "\n Pilihan Tidak Terdeteksi, Ketik apa saja untuk mengulang \n";
			system ("pause");
			goto pilihan1;}
			
		cetakrute(pilrute);
		cout << "	Pilih tanggal [1-4] : "; cin >> piltanggal;
		
		if(piltanggal < 1 || piltanggal > 4){
			cout << "	Pilihan Tidak Terdeteksi, Ketik apa saja untuk mengulang" << endl;
			system ("pause");
			goto pilihan1;
		}
		
	}
}
