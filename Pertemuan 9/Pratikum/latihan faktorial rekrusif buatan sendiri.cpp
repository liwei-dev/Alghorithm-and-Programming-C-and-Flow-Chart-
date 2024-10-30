#include <bits/stdc++.h>
using namespace std;

int faktorial_rec(int n){
	if (n>0){
		if (n==1){
			cout << n << " = "; 
		}
		else{
			cout << n << " x "; 
		}
		return (n) * faktorial_rec(n-1);
	}
	else{
		return 1;
	}
}

int main(){
	int hasil, n;
	cout << "Fungsi menghitung faktorial" << endl;
	cout << "N: ";
	cin >> n;
	hasil = faktorial_rec(n);
	cout << hasil;

	return 0;
}
