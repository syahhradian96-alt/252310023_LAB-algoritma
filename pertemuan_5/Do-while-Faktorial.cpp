#include <iostream>
using namespace std;

int main() {
    int n;
    long long hasil;
    char ulang;

    do {
        cout << "Masukkan bilangan: ";
        cin >> n;

        hasil = 1;
        int i = 1;

        while (i <= n) {
            hasil *= i;
            i++;
        }

        cout << "Hasil " << n << "! = " << hasil << endl;

        cout << "Ulangi lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y'); 

    return 0;
}

