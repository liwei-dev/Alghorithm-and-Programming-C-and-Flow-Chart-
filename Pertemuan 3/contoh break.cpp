#include<iostream>
#include<math.h>
using namespace std;

int main (){
    int n, c;
    char p;

    cout << "Ketikkan sembarang bilangan: ";
    cin >> n;

    cout << "Program untuk menghitung pangkat bilangan " << n;
    cout << "Mulai dari 0-10" << endl;

    for (c=0; c<10; c++){
        cout << n << "^" << c << " = ";
        cout << pow(n, c) << endl;
        cout << "tekan s untuk pencet berhentai, ata tombol lain untuk lanjut";
        cin >> p;
        if(p == 'S' || p == 's'){
            break;
        }
    }
    cout << "\nProgram Selesai";

    return 0;
}
