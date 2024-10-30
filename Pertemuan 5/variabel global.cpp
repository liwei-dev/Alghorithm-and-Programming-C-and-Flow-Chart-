#include <iostream>
using namespace std;

int a = 1; //variabel global

void print (){
	cout << "a di dalam void : " << a << endl;
	a = 2;
}

int main (){
	int b; //variabel lokal
	print ();
	cout << "a di dalam main : " << a << endl;
}
