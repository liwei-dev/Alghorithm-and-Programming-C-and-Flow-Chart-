#include <bits/stdc++.h>
using namespace std;

int fibonacci_rek(int N){
	if(N==1){
		return N;
	}
	else {
		if (N==2){
			return 1;
		}
		else {
			return fibonacci_rek(N-1) + fibonacci_rek(N-2);
		}
	}
}

int main (){
	int N, hasil;
	
	cout << "Deret Fibonacci ke: ";
	cin >> N;
	hasil = fibonacci_rek(N);
	cout << "Nilai: " << hasil;
	return 0;
}
