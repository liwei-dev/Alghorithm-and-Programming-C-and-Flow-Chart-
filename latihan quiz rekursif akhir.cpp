#include <iostream>
#include <math.h>
using namespace std;

int main (){
	int a; 
	int b = 0; 
	int genap = 0;
	int ganjil = -1;
	
	cout << "Input :";
	cin >> a;
	cout << endl;
	
	if (fmod (a,2)==0){
		while (a > 1){
			genap = genap +2;
			cout << a << "/" << genap << " = ";
			a = a/genap;
			cout << a << endl;
			b++;
		}
		cout << "output : " << b;
	}
	else if (fmod (a,2) !=0){
		while (a >1){
			ganjil = ganjil + 2;
			cout << a << "/" << ganjil << " = ";
			a = a/ganjil;
			cout << a << endl;
			b++;
		}
		cout << "output : " << b;
	}
	return 0;
}
