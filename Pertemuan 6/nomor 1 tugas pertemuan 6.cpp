#include <iostream>
using namespace std;

int main(){
    string kata;
    int x, i;
 
 	cout << "Program Untuk Menentukan Kata Polindrome" << endl << endl;
    cout << "Input Kata : ";
	cin >> kata;
    x = kata.length();

//Looping untuk menentukan kata yang diinput polindrome atau bukan
    for(i = 0; i < x; i++){
        if(kata[i] != kata[x-i-1]){
      		cout << "Kata " << kata << " bukanlah kata polindrome " << endl;	
      		return 0;
		}
    }
	cout << "Kata " << kata << " merupakan kata polindrome ";

return 0;
}
