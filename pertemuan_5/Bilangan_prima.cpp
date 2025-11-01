#include <iostream>
using namespace std;

int main()
{
    int n, i;
    bool prima = true;

    cout << "Masukkan bilangan: ";
    cin >> n;

    if (n <= 1) {
        prima = false;
    } 
    else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                prima = false;
                break;
            }
        }
    }

    if (prima)
        cout << "Termasuk bilangan PRIMA" << endl;
    else
        cout << "Bukan termasuk bilangan PRIMA" << endl;

    return 0;
}

