#include <bits/stdc++.h>
using namespace std;

int main(){
	int *ptr, total;
	ptr = new int;
	*ptr = 25;
	
	cout << "Isi variabel: " << *ptr << endl;
	cout << "*ptr: "; cin >> *ptr;
	cout << "Isi variabel: " << *ptr << endl;
	total = *ptr * 2;
	cout << "Isi variabel total: " << total << endl;
	
	return 0;
}
