#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string penulis;
    int tahun;
};

int main() {
    Buku daftarBuku[3] = {
        {"Pemrograman C++", "Bjarne Stroustrup", 2013},
        {"Atomic Habits", "James Clear", 2018},
        {"The Intelligent Investor", "Benjamin Graham", 1949}
    };

    string cariJudul;
    bool ditemukan = false;

    cout << "Masukkan judul buku yang dicari: ";
    getline(cin, cariJudul);

    for (int i = 0; i < 3; i++) {
        if (daftarBuku[i].judul == cariJudul) {
            cout << "\nBuku ditemukan!\n";
            cout << "Judul   : " << daftarBuku[i].judul << endl;
            cout << "Penulis : " << daftarBuku[i].penulis << endl;
            cout << "Tahun   : " << daftarBuku[i].tahun << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "\nBuku tidak ditemukan." << endl;
    }

    return 0;
}
