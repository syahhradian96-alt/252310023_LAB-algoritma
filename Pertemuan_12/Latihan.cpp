#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string penulis;
    int tahun;
};

int main() {

    Buku buku1, buku2;

    cout << "Masukkan data Buku 1\n";
    cout << "Judul   : ";
    getline(cin, buku1.judul);
    cout << "Penulis : ";
    getline(cin, buku1.penulis);
    cout << "Tahun   : ";
    cin >> buku1.tahun;
    cin.ignore();

    cout << endl;

    cout << "Masukkan data Buku 2\n";
    cout << "Judul   : ";
    getline(cin, buku2.judul);
    cout << "Penulis : ";
    getline(cin, buku2.penulis);
    cout << "Tahun   : ";
    cin >> buku2.tahun;

    cout << "\n=== Data Buku ===\n";

    cout << "Buku 1\n";
    cout << "Judul   : " << buku1.judul << endl;
    cout << "Penulis : " << buku1.penulis << endl;
    cout << "Tahun   : " << buku1.tahun << endl;

    cout << endl;

    cout << "Buku 2\n";
    cout << "Judul   : " << buku2.judul << endl;
    cout << "Penulis : " << buku2.penulis << endl;
    cout << "Tahun   : " << buku2.tahun << endl;

    return 0;
    
}
