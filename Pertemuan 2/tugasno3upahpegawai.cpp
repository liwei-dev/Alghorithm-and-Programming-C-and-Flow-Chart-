#include <iostream>
using namespace std;

int main(){
	char namakaryawan[10];
	int jamkerja;
	int upahperjam;
	int gajiperminggu;
	int upahlembur;
	
	//judul
	cout << " Program menghitung gaji perminggu dan lembur jika ada, serta menampilkan hasilnya " << endl << endl;
	
	//input
	cout << "ketikkan nama karyawan : " << endl;
	cin >> namakaryawan;
	cout << endl;
	cout << "masukan jam kerja : " << endl;
	cin >> jamkerja;
	cout << endl;
	cout << "masukan upah per jam : " << endl;
	cin >> upahperjam;
	cout << endl;
	
	//hitung
	gajiperminggu = jamkerja * upahperjam;
	upahlembur = (jamkerja - 40) * upahperjam * 1.25;
	
	//tampilkan
	if (jamkerja >= 40){
		cout << "gaji minggu ini : " << gajiperminggu << endl;
		cout << "upah lembur minggu ini : " << upahlembur;
	}
	
	else if (jamkerja <40){
		cout << "gaji minggu ini : " << gajiperminggu;
	}
	
	return 0;
}
