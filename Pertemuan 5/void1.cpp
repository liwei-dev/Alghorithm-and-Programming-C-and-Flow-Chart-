#include <iostream>
using namespace std;

void print (char a){
	cout << a << endl;
}

int main (){
	char huruf;
	
	cout << "Masukkan huruf : ";
	cin >> huruf;
	
	//pemanggilan void
	print(huruf);
	
	return 0;
}
