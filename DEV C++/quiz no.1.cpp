#include <iostream>
using namespace std;

int reamur (int c){
	return (c*0.8);	
}

int fahrenheit (int c){
	return (c*1.8+32);
}

int kelvin (int c){
	return (c+273);
}

int main (){
	int c;
	int r;
	int f;
	int k;
	char pilihan;
	
	cout << "Program mengkonversi celcius ke reamur, fahrenheit, atau kelvin" << endl << endl;
	
	cout << "Masukkan nilai celcius = ";
	cin >> c;
	
	cout << "Pilihan konversi suhu : " << endl;
	cout << "a. Reamur" << endl;
	cout << "b. Fahrenheit" << endl;
	cout << "c. Kelvin" << endl;
	cout << "Pilihan : ";
	cin >> pilihan;
	
	switch(pilihan){
		case 'a' : {
			r = reamur(c);
			cout << c << " derajat Celcius setara dengan " << r << " derajat Reamur";
			break;
		}
		case 'b' : {
			f = fahrenheit(c);
			cout << c << " derajat Celcius setara dengan " << f << " derajat Fahrenheit";
			break;
		}
		case 'c' : {
			k = kelvin(c);
			cout << c << " derajat Celcius setara dengan " << k << " derajat Kelvin";
			break;
		}
		default : {
			cout << "Pilihan tidak valid";
			break;
		}
	}
	return 0;
	
}
