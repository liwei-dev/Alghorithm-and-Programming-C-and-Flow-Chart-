#include <iostream>
using namespace std;

int main () {
	int n1;
	int nr;
	int i;
	
	cout << "Program untuk menghitung rata-rata dari 5 bilangan : " << endl;
	cout << "ketikan 5 bilangan" << endl;
	
	i = 0;
	nr = 0;
	
	while (i < 5) {
		cin >> n1;
		nr = nr + n1;
		i = i + 1;
	}
	
	nr = nr/5;
	cout << endl << endl;
	cout << "Rata-rata dari 5 bilangan = " << nr << endl;
	
	return 0;
}
