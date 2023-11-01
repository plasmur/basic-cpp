#include <iostream>
#include <string>
using namespace std;

int main()
{

  bool fever, loss_off_taste, loss_off_smell, cough, tiredness, result, tickets, luggage;
  string name;
  float age;

  cout << "masukan nama anda: ";
  cin >> name;

  cout << " masukan umur anda: ";
  cin >> age;

  cout << "selamat datang di bandara, " << name << " umur anda adalah :" << age << "\nAnda wajib dicek kalau anda memiliki Virus Corona!" << endl;

  cout << "Enter the following details with full honesty to generate your report" << endl;

  cout << "instruksi untuk pengguna : tekan 0 untuk tidak dan tekan 1 untuk iya" << endl;
  cout << "----------------------------------------------------------------------------" << endl;

  cout << "\n1. dalam beberapa hari terakhir apakah anda merasa demam?: ";
  cin >> fever;

  cout << "\n2. dalam beberapa hari terakhir apakah anda tidak bisa merasa makanan?: ";
  cin >> loss_off_taste;

  cout << "\n3. dalam beberapa hari terakhir apakah anda tidak bisa mencium apa-apa?: ";
  cin >> loss_off_smell;

  cout << "\n4. dalam beberapa hari terakhir apakah anda batuk-batuk?: ";
  cin >> cough;

  cout << "\n5. dalam beberapa hari terakhir apakah anda merasa lelah?: ";
  cin >> tiredness;
  result = (fever && (loss_off_taste || loss_off_smell) && cough && tiredness);
  if (result = 0)
  {
    cout << "\nPositif corona, tidak(0) atau iya(0) = "
         << "tidak"
         << "\n\n";
  }
  else
  {
    cout << "\nPositif corona, tidak(0) atau iya(0) = "
         << "iya"
         << "\n\n";
  }

  if (result == 0)
  {
    cout << "\nApakah Anda mempunyai tiket yang valid?:";
    cin >> tickets;

    cout << "\nAPakah anda ingin memasukan barang bawaan anda?:";
    cin >> luggage;

    bool board((luggage || (!result)) && tickets);

    if (board == 0)
    {
      cout << "\nProses masuk tidak sempurna!";
    }
    else if (board == 1)
    {
      cout << "\nProses masuk sempurna, Semoga selamat sampai tujuan! " << name;
    }
  }
  if (result == 1)
  {
    cout << name << ", Sepertinya anda positif corona dari hasil pengecekan." << endl;
    cout << "kami tidak dapat menaiki anda di pesawat. maaf karena ketidaknyamaannya !" << endl;
  }
  return 0;
}