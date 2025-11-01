#include <iostream>
using namespace std;

int main()
{
	char y[30]; char z[35]; char x[40];
	cout << "Masukkan NPM anda: ";
	cin >> x;
	cout << "Masukkan Nama anda: ";
	cin >> y;
	cout << "Masukkan Alamat anda: ";
	cin >> z;
	
	cout << "NPM anda adalah: " << x;
	cout << "\nNama anda adalah: " << y;
	cout << "\nAlamat anda adalah: " << z;
	
	return 0;
}
