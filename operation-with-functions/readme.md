# operasi dengan fungsi di c++

## pendahuluan

fungsi di c++ adalah blok kode yang dapat digunakan kembali untuk melakukan tugas tertentu. Fungsi dapat menerima input (parameter) 
dan menghasilkan output (nilai kembalian atau return). Dalam c++, kita dapat melakukan berbagai operasi dengan fungsi, seperti:

**1. menjalankan fungsi:**

-Untuk menjalankan fungsi, kita perlu memanggil namanya diikuti dengan tanda kurung dan argumen (jika ada).
- contoh : 
double hitungGajiPokok(int jamkerja)
{
  double gajipokok = jamkerja * 10000;
  return gajipokok;
}
**2. melewatkan nilai sebagai argumen:**
-fungsi dapat menerima nilai sebagai argumen.
-nilai argumen diteruskan ke dalam fungsi saat pemanggilan.

** 3. menerima nilai kembalian:**
-fungsi dapat mengembalikan nilai.
-nilai kembalian diperoleh dari fungsi setelah pemanggilan.
- contoh : 
double hitungTotalGaji(double gajiPokok, double gajiLembur)
{
  double totalGaji = gajiPokok + gajiLembur;
  return totalGaji; (<========== ini)
}

**4. operasi aritmatika dengan fungsi**
-kita dapat melakukan operasi dengan hasil fungsi.

**5. operasi perbandingan dengan fungsi:**
-kita dapat melakukan operasi perbandingan dengan hasil fungsi.


