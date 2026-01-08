#include <iostream>
using namespace std;

float konversiSuhu(float nilai, int dari, int ke) {
    float hasil;

    float celcius;

    if (dari == 1) celcius = nilai;
    else if (dari == 2) celcius = (nilai - 32) * 5.0/9.0;
    else if (dari == 3) celcius = nilai - 273.15;

    if (ke == 1) hasil = celcius;
    else if (ke == 2) hasil = (celcius * 9.0/5.0) + 32;
    else if (ke == 3) hasil = celcius + 273.15;

    return hasil;
}

int main() {
    float angka;
    int dari, ke;

    cout << "=== Program Konversi Suhu ===\n";
    cout << "1. Celcius\n2. Fahrenheit\n3. Kelvin\n";

    cout << "Masukkan jenis suhu awal (1-3): ";
    cin >> dari;

    cout << "Masukkan angka suhu: ";
    cin >> angka;

    cout << "Konversi ke jenis suhu (1-3): ";
    cin >> ke;

    float hasil = konversiSuhu(angka, dari, ke);

    cout << "Hasil konversi: " << hasil << endl;

    return 0;
}

