#include <iostream>
using namespace std;

int main(){
    int f;
	
	cout << "Program untuk membuat pola output" << endl << endl;
    cout << "Masukkan barisan pola : ";
    cin >> f;

    for (int i = 1; i <= f; i++) {


         for (int j = 1; j <= f; j++){
            if (j == i || j == (f + 1 - i))
                cout << " @";
            else
                cout << " =";
         }
        cout << endl;
   }
   return 0;
   
}
