#include <iostream>
using namespace std;

int main()
{
    // pre variabel a sebelumnya || b variabel a setelahnya

    int x = 10, a;
    int y = 18, b;

    cout << " pre increment operation\n";
    cout << " ------------------------ \n";
    a = ++x; // x + 1 baru diambil a
    // nilai a akan berubah
    cout << " \na = " << a;

    // nilai x akan berubah sebelum operasi a = ++x;
    cout << " \nx = " << x;

    cout << " post increment operation\n ";
    cout << " ------------------------- \n";
    b = y++; // diambil b dulu baru y + 1
    // nilai b akan berubah
    cout << " \nb = " << b;

    // nilai y akan berubah setelah operasi b = y++
    cout << " \ny = " << y;

    ~return 0;
}