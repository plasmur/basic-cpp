#include <iostream>

using namespace std;

int main()
{
  // deklarasi variabel
  int small, arr[100], size, i;

  // meminta pengguna memasukkan ukuran array
  cout << "\n enter array size (max 100): ";
  cin >> size;

  // meminta pengguna memasukan elemen array
  cout << "\n enter array elements: \n";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  // mencari elemen terkecil dalam array
  cout << "\n searching for smallest element ...\n\n";
  small = arr[0];
  for (i = 0; i < size; i++)
  {
    if (small > arr[i])
    {
      small = arr[i];
    }
  }
  // menampilkan elemen terkecil
  cout << "smallest element is " << small;

  return 0;
}
