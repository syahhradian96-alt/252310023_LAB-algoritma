#include <iostream>
using namespace std;

int pangkat(int *angka)
{
	*angka = (*angka) * (*angka) * (*angka);
}

int main()
{
    int x;

    cout << "Masukkan angka: ";
    cin >> x;

    pangkat(&x);

    cout << "Hasil dipangkatan 3: " << x << endl;

    return 0;
}
