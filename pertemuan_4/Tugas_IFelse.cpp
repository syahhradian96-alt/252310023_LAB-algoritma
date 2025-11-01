#include <iostream>
using namespace std;

int main()
{
	string nama_siswa;
	float n1, n2, n3, rata_rata;
	
	cout << "\nPROGRAM HITUNG NILAI RATA-RATA\n\n" << endl;
	
	cout << "Masukan Nama Siswa: ";
	getline(cin, nama_siswa);
	
	cout << "Nilai Pertandingan 1: ";
	cin >> n1;
	cout << "Nilai Pertandingan 2: ";
	cin >> n2;
	cout << "Nilai Pertandingan 3: ";
	cin >> n3;
	
	rata_rata = (n1+n2+n3) / 3;
	
	if(rata_rata >= 85){
		cout << "Siswa yang bernama " << nama_siswa
		<< ". Memperoleh nilai " << rata_rata <<".\n" 
		<< "Dari hasil perlombaan yang diikutinya hadiah yang didapatkan adalah Komputer Core i5" << endl;
	}
	else if(rata_rata >= 70){
		cout << "Siswa yang bernama " << nama_siswa 
		<< ". Memperoleh nilai " << rata_rata << ".\n"
		<< "Dari hasil perlombaan yang diikutinya hadiah yang didapatkan adalah Uang sebesar Rp. 2.500.000" << endl;
	}
	else {
		cout << "Siswa yang bernama " << nama_siswa 
		<< ". Memperoleh nilai " << rata_rata << ".\n" 
		<< "Dari hasil perlombaan yang diikutinya hadiah yang didapatkan adalah Hiburan" << endl;
	}
	
	return 0;
	
}
