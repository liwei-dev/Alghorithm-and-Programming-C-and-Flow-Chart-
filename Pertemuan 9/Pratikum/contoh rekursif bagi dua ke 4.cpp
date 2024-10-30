//sumq_rekursif_bagi_dua
#include <bits/stdc++.h>
using namespace std;

int SUMSQ_REC_3(int M, int N){
	if (M == N){
		return M*M;
	}
	else{
		int mid;
		mid = (M+N)/2;
		return SUMSQ_REC_3(M,mid)+SUMSQ_REC_3(mid+1,N);
	}
}

int main(){
	int hasil, M, N;
	cout << "Fungsi menjumlahkan M^2 sampai N" << endl;
	cout << "M : ";
	cin >> M;
	cout << "N : ";
	cin >> N;
	hasil = SUMSQ_REC_3(M,N);
	cout << hasil;

	return 0;
}
