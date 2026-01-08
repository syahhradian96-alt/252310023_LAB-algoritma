#include <iostream>
using namespace std;

void tampil(int A[10][10], int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int baris1, kolom1, baris2, kolom2;
    int A[10][10], B[10][10], C[10][10];
    int pilihan;

    cout << "=== PROGRAM OPERASI MATRIKS ===\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "Pilih operasi (1-3): ";
    cin >> pilihan;

    cout << "\nMasukkan jumlah baris matriks pertama: ";
    cin >> baris1;
    cout << "Masukkan jumlah kolom matriks pertama: ";
    cin >> kolom1;

    cout << "\nMasukkan elemen-elemen matriks pertama:\n";
    for (int i = 0; i < baris1; i++) {
        for (int j = 0; j < kolom1; j++) {
            cin >> A[i][j];
        }
    }

    cout << "\nMasukkan jumlah baris matriks kedua: ";
    cin >> baris2;
    cout << "Masukkan jumlah kolom matriks kedua: ";
    cin >> kolom2;

    cout << "\nMasukkan elemen-elemen matriks kedua:\n";
    for (int i = 0; i < baris2; i++) {
        for (int j = 0; j < kolom2; j++) {
            cin >> B[i][j];
        }
    }

    if (pilihan == 1 || pilihan == 2) {
        if (baris1 != baris2 || kolom1 != kolom2) {
            cout << "\nOperasi tidak bisa dilakukan! Ukuran matriks harus sama.\n";
            return 0;
        }

        for (int i = 0; i < baris1; i++) {
            for (int j = 0; j < kolom1; j++) {
                if (pilihan == 1)
                    C[i][j] = A[i][j] + B[i][j];
                else
                    C[i][j] = A[i][j] - B[i][j];
            }
        }

        cout << "\nHasil operasi matriks:\n";
        tampil(C, baris1, kolom1);
    }

    else if (pilihan == 3) {
        if (kolom1 != baris2) {
            cout << "\nOperasi tidak bisa dilakukan! Kolom A harus = Baris B.\n";
            return 0;
        }

        for (int i = 0; i < baris1; i++) {
            for (int j = 0; j < kolom2; j++) {
                C[i][j] = 0;
            }
        }

        for (int i = 0; i < baris1; i++) {
            for (int j = 0; j < kolom2; j++) {
                for (int k = 0; k < kolom1; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        cout << "\nHasil perkalian matriks:\n";
        tampil(C, baris1, kolom2);
    }

    else {
        cout << "Pilihan tidak valid!\n";
    }

    return 0;
}

