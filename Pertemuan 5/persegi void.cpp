#include <iostream>
using namespace std;

void persegi(int sisi, int& kel, int& luas){
	kel = 4*sisi;
	luas = sisi*sisi;
}
int main (){
	int s;
	int luasp, kelp;
	
	cout << "Masukkan panjang sisi persegi : ";
	cin >> s;
	cout << endl;
	
	persegi(s, luasp, kelp);
	cout << "Luas = " << luasp << endl;
	cout << "keliling = " << kelp;
	
	return 0;
}
