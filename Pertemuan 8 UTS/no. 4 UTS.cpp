#include <iostream>
using namespace std;

int main(){
    int n;
 
	cout << "Program untuk membuat pola dari nilai angka yang diinput" << endl << endl;
	cout << "Masukkan barisan pola (N): ";
	cin >> n;

//looping untuk membuat pola
    for (int i = 1; i <= n; i++) {
         for (int j = 1; j <= n; j++){ //looping untuk angka pada pola
            if (j == i || i == n - j + 1)
                cout << j ;
            else
                cout << " ";
         }
        cout << endl;
   }
   
return 0;
}
