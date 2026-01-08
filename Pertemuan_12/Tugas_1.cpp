#include <iostream>
using namespace std;

struct NilaiMahasiswa {
    float tugas;
    float praktikum;
    float uts;
    float uas;
};

int main() {
    NilaiMahasiswa mhs;
    float rata;

    cout << "Masukkan nilai Tugas      : ";
    cin >> mhs.tugas;
    cout << "Masukkan nilai Praktikum  : ";
    cin >> mhs.praktikum;
    cout << "Masukkan nilai UTS        : ";
    cin >> mhs.uts;
    cout << "Masukkan nilai UAS        : ";
    cin >> mhs.uas;

    rata = (mhs.tugas + mhs.praktikum + mhs.uts + mhs.uas) / 4;

    cout << "\nNilai rata-rata: " << rata << endl;
    cout << "Nilai huruf    : ";

    if (rata >= 90) {
        cout << "A";
    } else if (rata < 90 && rata >= 80) {
        cout << "B";
    } else if (rata < 80 && rata >= 70) {
        cout << "C";
    } else if (rata < 70 && rata >= 60) {
        cout << "D";
    } else {
        cout << "E";
    }

    cout << endl;
    return 0;
}
