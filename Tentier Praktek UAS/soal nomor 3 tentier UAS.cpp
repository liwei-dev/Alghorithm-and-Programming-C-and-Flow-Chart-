#include <bits/stdc++.h>
using namespace std;

int main () {
	int angka[7];
	int temp;
	ifstream data ("input.txt");
	ofstream Ofile ("output.txt");

 	for (int i = 0; i < 7; i++) {
 		data >> angka[i];
	}
	
	for (int j=1;j<7;j++) {	
		int i = j - 1;
		temp = angka[j];
		while ((i>=0) && (temp < angka[i])) {
			angka[i+1] = angka[i];
			i--;
		}
		angka[i+1] = temp;
	}
	
	cout << "Data setelah diurutkan: " ;
	Ofile << "Data setelah diurutkan: " ;
	
	for (int i=0;i<7;i++) {
		cout << angka[i] << " " ;
		Ofile << angka[i] << " " ;
	}
}



