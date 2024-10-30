#include <iostream>
using namespace std;

void print(int& a, int& b){
	cout << "x = " << a << endl;
	cout << "y = " << b << endl;
	a+= 1;
	b+= 1;
}

int main(){
	int x = 1, y = 2;
	cout << "Pemanggilan fungsi pertama" << endl;
	print (x,y);
	cout << "Pemanggilan fungsi kedua" << endl;
	print (x,y);
}
