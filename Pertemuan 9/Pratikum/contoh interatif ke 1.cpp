//sumq_ieratif
#include <bits/stdc++.h>
using namespace std;

int SUMSQ_ITERATIF(int M, int N){
	int sum = 0;
	for (int i = M; i <= N; i++){
		sum+=i*i;
	}
	return sum;
}

int main(){
	int hasil, M, N;
	cout << "Fungsi menjumlahkan M^2 sampai N" << endl;
	cout << "M : ";
	cin >> M;
	cout << "N : ";
	cin >> N;
	hasil = SUMSQ_ITERATIF(M,N);
	cout << hasil;

	return 0;
}
