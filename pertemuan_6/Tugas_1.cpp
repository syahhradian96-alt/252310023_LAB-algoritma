#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
    int a, b;
    char lagi;

    do {
        system("cls");
        cout << "Masukkan Bilangan = ";
        cin >> a;

        b = a % 2;
        cout << "Nilai " << a << " % 2 adalah = " << b << endl;

        cout << "\nIngin Hitung Lagi [Y/T]: ";
        lagi = getche();
        cout << endl;

    } while (lagi == 'Y' || lagi == 'y');

    cout << "\nProgram selesai." << endl;
    getch();
    return 0;
}
