#include<iostream>
#include<string>
using namespace std;

int main(){
	string nama[50];
	int nilai[50];
	int i = 0;
	int jumlah=0;
	int min;
	int max = 0;
	int total1 = 0;
	int total2 = 0;
	
	do{
		cout << "Masukkan nama  = "; cin >> nama[i];
		if(nama[i] == "STOP"){
			break;
		}
		if(nama[i] != "STOP"){
		cout << "Masukkan nilai = "; cin >> nilai[i];
		}
		i++;
	}while(jumlah < i);
	
	for(int jumlah = 0; jumlah < i; jumlah++){
			if(nilai[jumlah] > max){
			max = nilai[jumlah];
			if(nilai[jumlah] = max){
			total1++;
			}
		}
		else if(nilai[jumlah] < min){
			min = nilai[jumlah];
			if(nilai[jumlah] = min){
			total2++;
			}
		}
	}
	
	cout << "Nilai tertinggi = " << max << endl;
	cout << "Jumlah siswa nilai tertinggi = " << total1 << endl;
	cout << "Nilai terendah = " << min << endl;
	cout << "Jumlah siswa nilai terendah = " << total2 << endl;
	
	return 0;
}
