// c++ program to sizes of data types
#include<iostream>
using namespace std;

char nama = 'f';
string namaaku = "halipuddin";

int main() {
    cout << "size of variabel nama ku :"<< sizeof(namaaku)
	<< " bytes" << endl;
	cout << "Size of char : " << sizeof(nama)
	<< " byte" << endl;
	cout << "Size of int : " << sizeof(int)
	<< " bytes" << endl;
	cout << "Size of short int : " << sizeof(short int)
	<< " bytes" << endl;
	cout << "Size of long int : " << sizeof(long int)
	<< " bytes" << endl;
	cout << "Size of signed long int : " << sizeof(signed long int)
	<< " bytes" << endl;
	cout << "Size of unsigned long int : " << sizeof(unsigned long int)
	<< " bytes" << endl;
	cout << "Size of float : " << sizeof(float)
	<< " bytes" <<endl;
	cout << "Size of double : " << sizeof(double)
	<< " bytes" << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t)
	<< " bytes" <<endl;

	// this is for return main for zero
	return 0;
}