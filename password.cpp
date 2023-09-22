#include <iostream>
#include <string>
using namespace std;

int main()
{

  string username = "komplitus";
  string password = "20kopi";
  string user, sandi;
  cout << " enter ur username ";
  cin >> user;
  cout << " enter ur password ";
  cin >> sandi;

  if (username == user && password == sandi)
  {
    cout << " selamat datang ke akun mu " << username << endl;
  }

  else if (username != user && password == sandi)
  {
    cout << " username salah, ulangi lagi\n ";
  }

  else if (username == user && password != sandi)
  {
    cout << " password salah, ulangi lagi\n ";
  }

  else
  {
    cout << " password dan username tidak ditemukan.\n ";
  }

  return 0;
}
