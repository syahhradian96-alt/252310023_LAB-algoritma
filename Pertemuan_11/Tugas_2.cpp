#include <iostream>
using namespace std;

int main() {
    char kalimat[100];
    char hasil[100] = "";
    int i = 0;

    cout << "Masukkan kalimat: ";
    cin.getline(kalimat, 100);

    while (kalimat[i] != '\0') {
        i++;
    }
    i = i - 1;

    while (i >= 0) {
        int j = 0;
        while (hasil[j] != '\0') {
            j++;
        }

        hasil[j] = kalimat[i];
        hasil[j + 1] = '\0';
        i = i - 1;
    }

    cout << "Hasil: " << hasil << endl;

    return 0;
}

