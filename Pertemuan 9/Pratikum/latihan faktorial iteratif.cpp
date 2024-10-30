//faktorial_iteratif
#include <bits/stdc++.h>
using namespace std;

int FAKTORIAL_ITERATIF(int F){
	int total = 1, i;
	for (i = 1; i <= F; i++){
    	total = total * i;
    	}
	return total;
}

int main (){
	int F, hasil;
	cout << "Fungsi Faktorial" << endl;
	cout << "F : "; 
	cin >> F;
	hasil = FAKTORIAL_ITERATIF(F);
	cout << hasil;
	return 0;
}
