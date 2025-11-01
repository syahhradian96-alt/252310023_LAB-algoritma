#include <iostream>
using namespace std;

int main()
{
	int angka;
	cout << "Masukan bilangan: ";
	cin >> angka;
	
	if(angka%2==0){
		cout << "Bilangan genap";
	}
	else
		cout << "Bilangan Ganjil";
	
	return 0;
}
