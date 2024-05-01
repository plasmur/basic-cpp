#include <iostream>

using namespace std;

// user define functions
double hitungGajiPokok(int jamkerja)
{
  double gajipokok = jamkerja * 10000;
  return gajipokok;
}

double hitungGajilembur(int jamLembur)
{
  double gajiLembur = jamLembur * 15000;
  return gajiLembur;
}

double hitungTotalGaji(double gajiPokok, double gajiLembur)
{
  double totalGaji = gajiPokok + gajiLembur;
  return totalGaji;
}

// fungsi utama untuk outpunya
int main()
{
  int durasiKerja, lemburKerja;

  cout << "masukkan jumlah jam kerja:";
  cin >> durasiKerja;

  cout << "masukan jumlah jam lembur:";
  cin >> lemburKerja;

  double gajipokok = hitungGajiPokok(durasiKerja);
  double gajilembur = hitungGajilembur(lemburKerja);
  double totalgaji = hitungTotalGaji(gajilembur, gajipokok);

  // buat lines
  for (int i = 0; i <= 35; i++)
  {
    cout << "-";
  }
  cout << endl;

  cout << "Gaji pokok :" << gajipokok << endl;
  cout << "gaji lembur :" << gajilembur << endl;
  cout << "total gaji :" << totalgaji << endl;

  return 0;
}