#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{

    char kalimat[100] = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";

    int x = strlen(kalimat);

    cout << "Kalimat Asli      : " << kalimat << endl;
    cout << "Kalimat Terbalik  : ";

    for (int i = x - 1; i >= 0; i--) {
        cout << (char)tolower(kalimat[i]);
    }

    cout << endl;
    return 0;
}

