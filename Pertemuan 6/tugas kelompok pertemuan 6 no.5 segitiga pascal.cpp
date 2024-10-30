#include <iostream>
using namespace std;

int main(){
int nilai,a;

cout << "masukkan batas : ";
cin >> nilai; // batas banyak piramid segitiga pascal
for (int i=0; i<=nilai; i++){
for (int k=0; k<=((2*nilai)-(2*i)); k++){ // looping untuk mencetak spasi
cout<<" ";
}
for (int j=0; j<=i; j++){ // looping untuk mencetak angka pada komponen segitiga pascal
if (j==0||i==j){
a=1;
}else{
a=a*(i+1-j)/j;
}
cout<<" "<< a ;
}
cout<< endl;
}
return 0;
}
