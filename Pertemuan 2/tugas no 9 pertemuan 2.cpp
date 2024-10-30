#include <iostream>
using namespace std;

int main () {
	int barisan;
	
	cout << "Program  segitiga sama kaki" << endl << endl;
	cout << "Masukkan barisan pola = ";
	cin >> barisan;
	
	for (int i = 1; i <= barisan; i++){
		for (int space = i; space < barisan; space++)
		cout << " ";
		for (int bintang = 1; bintang <= (2 * i - 1); bintang++)
		cout << "*";
		cout << endl;
	}
	return 0;
	
}
