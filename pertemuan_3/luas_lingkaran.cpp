#include <iostream>
#include <cmath> // untuk memakai fungsi fungi matematika
using namespace std;

int main()
{
	double r, t, luas;
	
	cout << "MENGHITUNG LUAS LINGKARAN" << endl;
	getchar();
	cout << "Masukan nilai r: ";
	cin >> r;
	
	luas = M_PI*r*r;
	
	cout << " Rumus: PI * r * r" << endl;
	cout << " : " << M_PI << " * " << r << " * " << r << endl;
	cout << "Luas lingkaran Adalah: " << luas << "cm2" << endl;
	
	return 0;
}
