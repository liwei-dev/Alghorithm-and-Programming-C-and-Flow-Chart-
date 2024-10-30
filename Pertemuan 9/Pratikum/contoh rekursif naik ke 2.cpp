//sumq_rekursif_naik
#include <bits/stdc++.h>
using namespace std;

int SUMSQ_REC(int M, int N){
	if (M < N){
		return (M*M) + SUMSQ_REC(M+1,N);
	}
	else{
		return M*M;
	}
}

int main(){
	int hasil, M, N;
	cout << "Fungsi menjumlahkan M^2 sampai N" << endl;
	cout << "M : ";
	cin >> M;
	cout << "N : ";
	cin >> N;
	hasil = SUMSQ_REC(M,N);
	cout << hasil;

	return 0;
}
