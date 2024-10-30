#include <iostream>
using namespace std;

int a = 10;

void A (){
	int a = 5;
	cout << a;
} 

int main (){
	A ();
	cout << endl << a;
	
	return 0;
}
