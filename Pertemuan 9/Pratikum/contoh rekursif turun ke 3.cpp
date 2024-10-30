//sumq_rekursif_turun
#include <bits/stdc++.h>
using namespace std;

int SUMSQ_REC_2(int M, int N){
	if (M < N){
		return SUMSQ_REC_2(M,N-1)+(N*N);
	}
	else{
		return N*N;
	}
}

int main(){
	int hasil, M, N;
	cout << "Fungsi menjumlahkan M^2 sampai N" << endl;
	cout << "M : ";
	cin >> M;
	cout << "N : ";
	cin >> N;
	hasil = SUMSQ_REC_2(M,N);
	cout << hasil;

	return 0;
}
