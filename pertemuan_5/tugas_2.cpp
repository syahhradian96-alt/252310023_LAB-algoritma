#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Masukkan n: ";
    cin >> n;

    int size = 2 * n;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if ( abs(i - j) < n &&
                 (i + j) > (n + 1) &&
                 (i + j) < (3 * n + 1) ) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}

