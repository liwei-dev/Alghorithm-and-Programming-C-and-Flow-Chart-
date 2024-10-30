#include <iostream>
using namespace std;

int main() {
    int jamMulai, menitMulai, jamSelesai, menitSelesai;
    
    cout << "Masukkan waktu mulai (contoh 08:30): ";
    cin >> jamMulai;
    cin.ignore(); // Mengabaikan titik dua (:)
    cin >> menitMulai;
    
    cout << "Masukkan waktu selesai (contoh 09:30): ";
    cin >> jamSelesai;
    cin.ignore(); // Mengabaikan titik dua (:)
    cin >> menitSelesai;
    
    // Menghitung lama dalam menit
    int lamaDalamMenit = (jamSelesai - jamMulai) * 60 + (menitSelesai - menitMulai);
    
    // Menghitung jam dan menit
    int lamaJam = lamaDalamMenit / 60;
    int lamaMenit = lamaDalamMenit % 60;
    
    cout << "Lama (dalam menit) = " << lamaDalamMenit << " menit" << endl;
    cout << "Lama (dalam jam dan menit) = " << lamaJam << " Jam " << lamaMenit << " menit" << endl;
    
    return 0;
}

