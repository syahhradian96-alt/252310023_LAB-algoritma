#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char huruf[20];
	char pindah[20];
	//clrscr//;
	
	cout<<"Masukan Sembarang kata: ";
	cin >> huruf;
	
	cout<<"Panjang Kata Yang di Inputkan: ";
	cout<<strlen(huruf);
	
	getchar();
}
