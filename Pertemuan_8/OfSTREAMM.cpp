#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream myfile;
	myfile.open("Text.exe", ios::app);
	
	cout << "OPERASI FILE OFSTREAM" << endl;
	cout << "-------------------" << endl;
	
	if (!myfile.fail())
	{
		myfile << "Belajar OPERASI FILE OFSTREAM" << endl;
		myfile.close();
		cout << "Text telah ditulis ke dalam file" << endl;
	}
	else
	{
		cout << "File tidak ditemukan" << endl;
	}
	
	getchar();
	return 0;
}
