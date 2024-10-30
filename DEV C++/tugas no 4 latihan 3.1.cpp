#include <iostream>
using namespace std;
int main(){
   int  i, j, k, spasi, baris;
   cout << "Program untuk membuat pola belah ketupat" << endl << endl;
   cout << "Masukkan barisan pola : ";
   cin >> baris;
   spasi = baris - 1;
   cout << endl;
   for  (i = 1; i <= baris; i++){
      for  (j = 1; j<= spasi; j++)
    	cout <<"   ";
     	spasi--;
      
      for  (k = 1; k <= 2 * i - 1; k++)
     	cout << "  *";
     	cout << endl;
   }
   spasi = 1;
   for  (i = 1; i<= baris - 1; i++){
      for  (j = 1; j <= spasi; j++)
    	cout << "   ";
     	spasi++;
     
      for  (k = 1 ; k <= 2 * (baris - i) - 1; k++)
     	cout << "  *";
     	cout << endl;
   }
   return 0;
}
