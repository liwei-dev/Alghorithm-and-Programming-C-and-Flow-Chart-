#include <iostream>

using namespace std;

int reverse_iteratif (string kata){
	int x;
	int i;
	x = kata.length();
	for(i = 0; i < x/2; i++){
        if(kata[i] = kata[x-i-1]){
              cout << kata << endl;
              return 0;
        }
    }
}

int main(){
    string kata;
 
    cout << "Program Untuk Menentukan Kata Polindrome" << endl << endl;
    cout << "Input Kata : ";
    cin >> kata;

    cout << "Iteratif = " << reverse_iteratif (kata);

return 0;
}
