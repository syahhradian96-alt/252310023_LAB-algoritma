#include <iostream>
using namespace std;

int main()
{
	char ulang;
	
	awal:
	cout << "Progrm Perulangan Menggunakan go to" << endl;
	cout << endl;
	
	cout << "Ingin Mengulang Perintah (y/n) ? ";
	cin >> ulang;
	
	cout << endl;
	
	if(ulang=='Y'|ulang=='Y'){
		goto awal;
	}
	if(ulang=='N'|ulang=='n'){
		goto akhir;
	}
	akhir:
		
	return 0;
}
