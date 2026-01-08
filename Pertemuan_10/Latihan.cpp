#include <iostream>
using namespace std;

int faktorial(int x) {
    int hasil = 1;
    for(int i = 1; i <= x; i++) {
        hasil *= i;
    }
    return hasil;
}

int main() {
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    int hasil = faktorial(angka);

    cout << "Hasil faktorial dari " << angka << " adalah: " << hasil << endl;

    return 0;
}
