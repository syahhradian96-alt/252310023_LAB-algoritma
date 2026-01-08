#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char kata1[] = "Teknik";
    char kata2[] = "Informatika";
    char hasil[100];

    cout << "kata pertama = " << kata1 << endl;
    cout << "kata kedua   = " << kata2 << endl;

    strcpy(hasil, kata1);

    strcat(hasil, " ");

    strcat(hasil, kata2);

    cout << "hasil gabungan = " << hasil << endl;

    return 0;
}

