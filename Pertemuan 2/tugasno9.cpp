#include <iostream>
using namespace std;

int main () {
	//bensin dalam satuan liter
	//jarak dalamkota dan luarkota dalam satuan kilo meter
	const double bensin = 20;
	const double dalamkota = 240;
	const double luarkota = 300;
	double efisiensidalamkota;
	double efisiensiluarkota;
	double ratarataefisiensi;
	
	//judul
	cout << " Program Menghitung Efisiensi Bensin dan Rata Rata Bensin " << endl;
	
	//hitung
	efisiensidalamkota = dalamkota / bensin;
	efisiensiluarkota = luarkota / bensin;
	ratarataefisiensi = (efisiensidalamkota + efisiensiluarkota) / 2;
	
	//tampilkan
	cout << endl << " Efisiensi bensin di dalam kota adalah " << efisiensidalamkota << " km per liter ";
	cout << endl << " Efisiensi bensin di luar kota adalah " << efisiensiluarkota << " km per liter ";
	cout << endl << " Efisiensi rata rata bensin adalah " << ratarataefisiensi << " km per liter ";
	
	return 0;
}
