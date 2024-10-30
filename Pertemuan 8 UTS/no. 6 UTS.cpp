#include <iostream>
#include <string>
using namespace std;

const int MAX_PEGAWAI = 100;

struct Pegawai {
    string nomorPegawai;
    double gajiPokok;
    int jumlahAnak;
    double tunjanganKeluarga;
};

void inputPegawai(Pegawai pegawai[], int& jumlahPegawai) {
    int i = 0;
    string nama;
    
    while (i < MAX_PEGAWAI) {
        cout << "Masukkan nomor pegawai (SELESAI untuk berhenti): ";
        cin >> nama;
        
        if (nama == "SELESAI") {
            break;
        }
        
        pegawai[i].nomorPegawai = nama;
        
        cout << "Masukkan gaji pokok: ";
        cin >> pegawai[i].gajiPokok;
        
        cout << "Masukkan jumlah anak: ";
        cin >> pegawai[i].jumlahAnak;
        
        i++;
    }
    
    jumlahPegawai = i;
}

double hitungTunjanganKeluarga(int jumlahAnak) {
    double tunjangan = 0.0;
    
    if (jumlahAnak == 0) {
        tunjangan = 0.0;
    } else if (jumlahAnak == 1) {
        tunjangan = 300000.0;
    } else if (jumlahAnak == 2) {
        tunjangan = 600000.0;
    } else {
        tunjangan = 900000.0;
    }
    
    return tunjangan;
}

void tampilkanRekapGaji(Pegawai pegawai[], int jumlahPegawai) {
    cout << "Rekap Gaji Pegawai:" << endl;
    for (int i = 0; i < jumlahPegawai; i++) {
        double tunjangan = hitungTunjanganKeluarga(pegawai[i].jumlahAnak);
        pegawai[i].tunjanganKeluarga = tunjangan;
        
        cout << "Nomor Pegawai: " << pegawai[i].nomorPegawai << endl;
        cout << "Gaji Pokok: Rp. " << pegawai[i].gajiPokok << endl;
        cout << "Jumlah Anak: " << pegawai[i].jumlahAnak << endl;
        cout << "Tunjangan Keluarga: Rp. " << pegawai[i].tunjanganKeluarga << endl;
        cout << "Total Gaji: Rp. " << pegawai[i].gajiPokok + pegawai[i].tunjanganKeluarga << endl;
        cout << "======================" << endl;
    }
}

int main() {
    Pegawai pegawai[MAX_PEGAWAI];
    int jumlahPegawai = 0;

    inputPegawai(pegawai, jumlahPegawai);
    tampilkanRekapGaji(pegawai, jumlahPegawai);

    return 0;
}

