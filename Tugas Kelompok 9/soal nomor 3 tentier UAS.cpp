#include <bits/stdc++.h>
using namespace std;

void baca (int angka[7]){
ifstream data;
 	data.open("input.txt");
 	
 	for (int i = 0; i < 7; i++) {
 		data >> angka[7];
	 
}
}

int main (){
	int angka[7];
	int temp;	

	for (int j=1;j<7;j++) {	baca (angka);

		int i = j - 1;
		temp = angka[j];
		while ((i>=0) && (temp < angka[i])) {
			angka[i+1] = angka[i];
			i--;
		}
		angka[i+1] = temp;
	}
	
	ofstream Ofile ("output.txt");
	ofile

}
