#include <iostream>
using namespace std;

int main() {
	int a = 5;
	
	cout << "Nilai awal a = " << a << endl;
	cout << "Pre-increment -> ++a = " << ++a << endl;
	cout << "Post-increment -> a++ = " << a++ << ", sekarang a = " << a << endl;
	cout << "Pre-decrement -> --a = " << --a << endl;
	cout << "Post-decrement -> a-- = " << a-- << ", sekarang a = " << a << endl;
	
	return 0;
}
