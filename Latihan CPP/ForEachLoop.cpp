// Program Cek kerja ForEach Looping
// kalau inisiasi arraynya kosong masih bisa diloop gak


// HASIL AKHIR = BISA DI LOOPING SEBANYAK N tapi isinya bukan 0

// index 0 = 4200048
// index 1 = 0, dst
// 24
// 0
// 0
// 0
// 0
// 0
// 8
// 0

// Kesimpulan, dipake loopin.
// di C++ gak ada variabel iterasi ke berapanya
// hanya ada variabel yang berisi isi dari array/vector

#include <bits/stdc++.h>

using namespace std;

int main() {
  // inisiasi array kosong sebanyak 10
  int array[10];

  for (auto i : array)
  {
    cout << "index ke" << i << endl;
  }
  
  return 0;
}