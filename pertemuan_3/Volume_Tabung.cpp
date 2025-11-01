#include <iostream>
#include <cmath> // untuk memakai fungsi fungi matematika
using namespace std;

int main()
{
	double r, t, luas;
	
	cout << "MENGHITUNG VOLUME TABUNG" << endl;
	getchar();
	cout << "Masukan nilai r: ";
	cin >> r;
	cout << "Masukan nilai t: ";
	cin >> t;
	
	luas = M_PI*r*r*t;
	
	cout << " Rumus: PI * r * r * t" << endl;
	cout << " : " << M_PI << " * " << r << " * " << r << " * " << t << endl;
	cout << "Volume Tabung Adalah: " << luas << "cm3" << endl;
	
	return 0;
}
