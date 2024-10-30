#include <iostream>
using namespace std;

int main () {
    int n1;
    int nr = 0;
    int i = 0;

    cout << "Program untuk menghitung rata-rata bilangan : " << endl;
    cout << "Ketikkan bilangan yang akan dihitung rata-ratanya : " << endl;
    cout << endl;
    cout << "Ketikkan angka -1 untuk berhenti" << endl << endl; //sentinel
    cout << "Masukkan bilangan : ";

    while (n1 != -1){
        cin >> n1;
        nr = nr + n1;
        i = i + 1;
    }

    nr = nr/i;
    cout << endl << "Rata-rata dari " << i << " bilangan = " << nr << endl;

    return 0;
}

