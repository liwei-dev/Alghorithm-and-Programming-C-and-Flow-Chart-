#include <iostream>
using namespace std;

void huruf_vokal (string x, int vokal){ //fungsi untuk menentukan huruf vokal
	for(int i = 0; i < x.length(); i++){
    	if(x[i]=='a'||x[i]=='i'||x[i]=='u'||x[i]=='e'||x[i]=='o'|| //untuk huruf kecil
	   	x[i]=='A'||x[i]=='I'||x[i]=='U'||x[i]=='E'||x[i]=='O') //untuk huruf kapital
      	vokal++;
		}
		if (vokal > 0) {
    	cout << "Jumlah huruf vokal = " << vokal;
  		}
  		else {
    	cout << "Huruf vokal tidak ditemukan";
    	}
}

void huruf_konsonan (string x, int konsonan){ //fungsi untuk menentukan huruf konsonan
	for(int i = 0; i < x.length(); i++){
    	if(x[i]=='b'||x[i]=='c'||x[i]=='d'||x[i]=='f'||x[i]=='g'||x[i]=='h'|| //untuk huruf kecil
		x[i]=='j'||x[i]=='k'||x[i]=='l'||x[i]=='m'||x[i]=='n'||x[i]=='p'||x[i]=='q'||
		x[i]=='r'||x[i]=='s'||x[i]=='t'||x[i]=='v'||x[i]=='w'||x[i]=='x'||x[i]=='y'||x[i]=='z'||
		x[i]=='B'||x[i]=='C'||x[i]=='D'||x[i]=='F'||x[i]=='G'||x[i]=='H'|| //untuk huruf kapital
		x[i]=='J'||x[i]=='K'||x[i]=='L'||x[i]=='M'||x[i]=='N'||x[i]=='P'||x[i]=='Q'||
		x[i]=='R'||x[i]=='S'||x[i]=='T'||x[i]=='V'||x[i]=='W'||x[i]=='X'||x[i]=='Y'||x[i]=='Z')
      	konsonan++;
		}
		if (konsonan > 0) {
    		cout << "Jumlah huruf konsonan = " << konsonan;
  		}
  		else {
    		cout << "Huruf konsonan tidak ditemukan";
    	}
}

void huruf_karakter (string x, int karakter){
	for(int i = 0; i < x.length(); i++){
    	if(x[i]=='`'||x[i]=='~'||x[i]=='!'||x[i]=='1'||x[i]=='@'||x[i]=='2'||
		x[i]=='#'||x[i]=='3'||x[i]=='$'||x[i]=='4'||x[i]=='%'||x[i]=='5'||x[i]=='^'||
		x[i]=='6'||x[i]=='&'||x[i]=='7'||x[i]=='*'||x[i]=='8'||x[i]=='('||x[i]=='9'||x[i]==')'||
		x[i]=='0'||x[i]=='-'||x[i]=='_'||x[i]=='='||x[i]=='+'||x[i]=='|'|| 
		x[i]==';'||x[i]==':'||x[i]=='"'||x[i]=='<'||x[i]==','||x[i]=='>'||x[i]=='.'||
		x[i]=='/'||x[i]=='?')
      	karakter++;
		}
		if (karakter > 0) {
    		cout << "Jumlah huruf karakter = " << karakter;
  		}
  		else {
    		cout << "Huruf karakter tidak ditemukan";
    	}
}
		

int main(){
	cout << "	************************************************************************* \n";
	cout << "	** Program untuk menghitung jumlah huruf vokal, konsonan, dan karakter ** \n";
	cout << "	************************************************************************* \n\n";
  	cout << endl;
  
 	string x;
  	int vokal = 0;
  	int konsonan = 0;
  	int karakter = 0;
  	
  	cout << "Input kata / kalimat: ";
  	getline(cin,x);
  	cout << endl;
	huruf_vokal(x, vokal);
	cout << endl;
 	huruf_konsonan(x, konsonan);
  	cout << endl;
  	huruf_karakter(x, karakter);
  	cout << endl;
  	
  	return 0;
}
