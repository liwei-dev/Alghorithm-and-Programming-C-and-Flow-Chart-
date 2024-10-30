#include <iostream>
#include <fstream>

using namespace std;

int main (){
	char teks [100];
	ifstream data;
	data.open("tulis.txt");
	
	while (data) {
		data.getline(teks, sizeof(teks));
		cout << teks << endl;
	}

	data.close();
	
	return 0;
}
