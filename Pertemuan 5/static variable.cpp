#include <iostream>
using namespace std;

void myfunction();

int main (){
	myfunction();
	myfunction();
	myfunction();
	myfunction();
	myfunction();
	return 0;
}

void myfunction(){
	int hitung = 0;
	static int s_hitung = 0; //static variable
	
	cout << "int hitung				 = " << ++hitung << endl;
	cout << "static int s_hitung	 = " << ++s_hitung << endl << endl;
}
