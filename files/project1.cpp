#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct student
{
  string name;
  float marks;
};

int main()
{
  ofstream fout("student.txt");
  char ch;
  // variabel untuk menyimpan jumlah siswa yang ingin dimasukkan
  int numstudents;

  // buat garis aja
  for (int i = 0; i <= 35; i++)
  {
    cout << "-";
  }
  cout << endl;
  // meminta input jumlah siswanya
  cout << "Enter the number of students:";
  cin >> numstudents;
  // array untuk menyimpan data mahasiswa sesuai jumlah yang dimasukkan pengguna
  student students[numstudents];
  // imput data dari pengguna
  for (int i = 0; i < numstudents; i++)
  {
    cout << i + 1 << ". Name:\t";
    cin >> students[i].name;
    cout << i + 1 << ". Marks:\t";
    cin >> students[i].marks;
    cin.ignore(); // hapus karakter newline dari buffer
  }
  // menulis data mahasiswa ke dalam file
  for (int i = 0; i < numstudents; i++)
  {
    fout << students[i].name << '\n'
         << students[i].marks << '\n';
  }
  fout.close();

  ifstream fin("student.txt");

  // buat garis doang
  for (int i = 0; i <= 35; i++)
  {
    cout << "-";
  }
  cout << endl;
  // membaca dan menampilkan data mahasiswa dari file
  for (int j = 0; j < numstudents; j++)
  {
    getline(fin, students[j].name);
    fin >> students[j].marks;
    fin.ignore(); // hapus karakter newline dari buffer
    cout << j + 1 << ",student name:" << students[j].name;
    cout << "\t marks:" << students[j].marks << '\n';
  }
  fin.close();
  return 0;
}