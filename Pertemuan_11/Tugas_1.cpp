#include <iostream>
using namespace std;

int tukar(int *a, int *b) {
	
	int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a, b;

    cout << "Masukkan nilai A: ";
    cin >> a;
    cout << "Masukkan nilai B: ";
    cin >> b;

    tukar(&a, &b);

    cout << "Hasil Penukaran: " << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}

