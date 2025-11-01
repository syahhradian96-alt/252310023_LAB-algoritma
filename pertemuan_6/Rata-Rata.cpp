#include <iostream>
using namespace std;

int main() {
	int nilai[5];
	int total = 0;
	
	cout << "Masukan 5 nilai mahasiswa: ";
	for (int i = 0; i < 5; i++) {
		cin >> nilai[i];
		total += nilai[i];
	}
	cout << "\nDaftar niali mahasiswa: " << endl;
	for (int i = 0; i < 5; i++){
		cout << "Nilai ke-" << i + i << " = " << nilai[i] << endl;
	}
	
	float ratarata = (float)total / 5;
	cout << "\nRata-rata nilai: " << ratarata << endl;
	
	return 0;
}
