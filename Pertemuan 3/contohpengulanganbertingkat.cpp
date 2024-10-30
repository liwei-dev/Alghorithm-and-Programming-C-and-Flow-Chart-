#include <iostream>
using namespace std;

int main () {
    int i, bt, nr, nt;
    int j, bs, sum;
    char nama[20];

    //input
    cout << "Banyak siswa: ";
    cin >> bs;

    cout << "Banyak tugas: ";
    cin >> bt;

    cout << endl;

    i=0;
    // loop untuk banyak siswa
    while (i<bs){ //loop luar
        cout << "Nama siswa: ";
        cin >> nama;
        j=1;
        sum=0;
        //loop untuk mengikut nilai tugas
        while (j<=bt){
            cout << "Nilai tugas ke - " << j << " : ";
            cin >> nt;
            sum = sum + nt;
            j++; // increment untuk memproses tugas berikutnya
        } // loop dalam
        nr = sum / bt;
        cout << endl;
        cout << "Nama : " << nama << endl;
        cout << "Nilai tugas rata-rata : " << nr << endl << endl;
        i++; // increment untuk memproses siswa berikutnya
    }

    return 0;
}
