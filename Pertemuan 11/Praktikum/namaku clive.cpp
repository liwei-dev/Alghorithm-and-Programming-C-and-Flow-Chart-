#include <iostream>
#include <fstream>

using namespace std;

int main (){
	ofstream data ("tulis.txt"); //bsa doc/html
	data << "Namaku Clive" << endl;
	data << "Umurku 19 tahun" << endl;
	data << "Hobiku tidur" << endl;
	data.close ();
	
	return 0;
}
