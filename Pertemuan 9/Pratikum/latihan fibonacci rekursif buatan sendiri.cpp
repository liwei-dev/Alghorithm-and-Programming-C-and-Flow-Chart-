#include <bits/stdc++.h>
using namespace std;

int fibonacci_rec(int n){
	if (n<2){
		return n;
	}
	return fibonacci_rec(n-1) + fibonacci_rec(n-2);
}

int main(){
	int n, i;
	
	cout << "Program menghitung deret bilangan fibonacci" << endl << endl;
	cout << "masukkan nilai: ";
	cin >> n;
	
	for(int i = 0; i <= n; i++){
		cout << fibonacci_rec(i) << "\t";
	}
	
	return 0;
}

