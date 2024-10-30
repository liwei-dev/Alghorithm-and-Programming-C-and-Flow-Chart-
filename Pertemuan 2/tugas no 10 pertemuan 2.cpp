#include<iostream>
using namespace std;

int main (){
    int n;
    int i;
    int j;
    int total;

    cout << "Program untuk menampilkan hasil dari bilangan faktorial " << endl;
 cout << "Masukkan bilangan faktorial : ";
    cin >> n;
 
    for (i = 1; i <= n; i++){
        cout << endl << i << "! = ";

    total = 1;
 for (j = i; j > 0; j--){
     total = total * j;
     if (j == 1){
      cout << j << " = " << total;
     }
     else{
     cout << j << " X ";
  }
 }
}
    return 0;
}
