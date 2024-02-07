# penujelasan pointers in c++

pointer adalah variabel yang menyimpan alamat memori dari variabel lain. pointer dapat digunakan untuk mengakses 
nilai variabel lain secara langsung, tanpa perlu menggunakan nama variabel tersebut.

dalam bahasa pemrograman C++, pointer dideklarasikan dengan menggunakan operator asterisk/bintang (*).
misalnya, untuk mendeklarasikan pointer ke variabel integer, kita bisa menggunakan kode berikut:

` int *ptr; `

kode diatas akan mendeklarasikan variabel ptr yang bertipe pointer ke integer. 
nilai awal variabel ptr adalah NULL, yang berarti tidak menunjuk ke variabel manapun.

untuk memberi nilai pada pointer, kita bisa menggunakan operator alamat (&).
misalnya untuk memberi nilai pointer ` ptr ` ke variabel `a`,kita bisa menggunakan kode berikut:

```cpp 
int a = 10;

ptr = &a;
```
kode di atas akan memberi nilai pointer ke ptr ke alamat memori variabel a.



