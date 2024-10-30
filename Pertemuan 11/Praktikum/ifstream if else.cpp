#include <iostream>
#include <fstream> // buat file emng ade ini
using namespace std;

int main(){
	char teks[100];
	ifstream data; //ifstream ni buat input
	data.open("tulis.txt");
	
	if (data.is_open()){
		while (data.good()) {
		
		data.getline(teks,sizeof(teks));
		cout << teks << endl;
		}
	}
	else {
	cout << "error";
	}
	
	return 0;
}
