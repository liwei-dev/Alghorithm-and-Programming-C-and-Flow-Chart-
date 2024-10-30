#include <bits/stdc++.h>
using namespace std;

int faktorial_rek(int n){
	if (n==1){
		return 1;
	}
	else{
		return (n*faktorial_rek(n-1));
	}
}

int main(){
	int hasil, n;
	cout << "Fungsi menghitung faktorial" << endl;
	cout << "N: ";
	cin >> n;
	hasil = faktorial_rek(n);
	cout << hasil;

	return 0;
}
