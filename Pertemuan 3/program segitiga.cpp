#include<iostream>
using namespace std;

int main (){
 int n;
 int i;
 int j;
 
 cout << "masukkan input: ";
 cin >> n;
 
 for(i=1; i <= n; i++){
  for(j=1; j <= i; j++){
   cout << "*";
  }
  cout << "\n";
 }
 
 return 0;
}
