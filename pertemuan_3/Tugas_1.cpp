#include <iostream> // library untuk input dan output
using namespace std; // mempersingkat penulisan saat memakai fitur standar library

int main(){ // Fungsi utama tempat program mulai dijalankan
	
	int x = 50; // x diisi dengan nilai 50
	int a, b, c, d, e; // variabel ini disiapkan buat nyimpen hasil dari operasi logika yanag akan dilakukan nanti
	// int adalah tipe data bilangan bulat
	
	a = x > 5+5; // dicek apakah x lebih besar dari hasil 5 + 5
	b = x > 100; // dicek apakah x lebih besar dari 100.
	c = a&&b; // logika AND hasilnya akan 1 jika dua-duanya true
	d = a || b; // logika OR hasilnya akan 1 jika salah satu atau dua-duanya true
	e = !(c); // logika NOT membalikan nilai logika
	
	cout << "\nNilai a = x > 5 + 5: " << a << endl;
	cout << "\nNilai b = x > 100: " << b << endl;
	cout << "\nNilai c = a&&b: " << c << endl;
	cout << "\nNilai d = a || b: " << d << endl;
	cout << "\nNilai e = !(c): " << e << endl;
	// menampilkan hasil dari setiap variabel ke layar.
	// \n fungsinya untuk membuat baris baru
	// << operator untuk menghubungkan variabel untuk ditampilkan di output
	
	getchar(); // buat nahan program biar nggak langsung tertutup setelah dijalankan
}
