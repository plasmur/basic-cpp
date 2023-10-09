#include <iostream>
#include <string>
using namespace std;

int main()
{
  double batas_kecepatan;
  double kecepatan_kendaraan;

  cout << " masukan batas kecepatan negara anda ";
  cin >> batas_kecepatan;

  cout << " masukan kecepatan kendaaraan anda ";
  cin >> kecepatan_kendaraan;

  string hasil = (kecepatan_kendaraan >= batas_kecepatan) ? " Anda melebihi batas kecepatan, anda ditilang " : " semoga anda aman maaf atas ketidaknyamanannya !";

  cout << hasil;
  return 0;
}