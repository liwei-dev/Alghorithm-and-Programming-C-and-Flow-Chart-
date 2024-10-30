#include <iostream>
 
using namespace std;
 
int main(){
	int tinggi, spasi, i, j;
	cout << "Program membuat segitiga terbalik" << endl << endl;
	cout << "Masukkan barisan pola =  ";
  	cin >> tinggi;
   	
	   for (i = (tinggi-1); i >= 1; i--)
   {
     	for (spasi = i; spasi < tinggi; spasi++)
           	cout << " ";
    
  		for (j = 1; j <= (2*i-1); j++)
           	cout << "*";
     		cout << "\n";
  }
  return 0;
}
