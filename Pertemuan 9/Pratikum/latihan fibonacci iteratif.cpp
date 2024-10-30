#include <bits/stdc++.h>
using namespace std;

int fibonacci_iteratif(int N){
	int F, F1, F2, i;
	
	if (N==1){
		return 1;
	}
	else {
		if (N==2){
			return 1;
		}
		else {
			F1=1;
			F2=1;
			for (i=3; i<=N; i++){
				F=F1+F2;
				F1=F2;
				F2=F;
			}
			return F;
		}
	}
}

int main (){
	int N, hasil;
	
	cout << "Deret Fibonacci ke: ";
	cin >> N;
	hasil = fibonacci_iteratif(N);
	cout << "Nilai: " << hasil;
	return 0;
}

