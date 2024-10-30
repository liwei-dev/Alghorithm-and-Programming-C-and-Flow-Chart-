#include <iostream>
using namespace std;

int main () {
    float n1;
    float nr;
    int i;
    float jumlah;

    cout << "PROGRAM MENGHITUNG RATA-RATA BILANGAN : " << endl << endl;
    cout << "Ketikkan jumlah bilangan : ";
    cin >> jumlah;

    i = 0;
    nr = 0;

    cout << endl;

    do {
        cout << "Bilangan ke-" << i+1 << " : ";
        cin >> n1;
        nr = nr + n1;
        i = i + 1;
    }
    while (i < jumlah);

    nr = nr/jumlah;
    cout << endl;
    cout << "Rata-rata dari " << jumlah << " bilangan = " << nr << endl;

    return 0;
}
