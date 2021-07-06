#include <bits/stdc++.h>

using namespace std;

// Masukkan Constrain pada soal
const int MIN_ENERGI = 2;
const int MAX_ENERGI = 1000;
const int MAX_TOTAL_ENERGI = 10000;

int main() {
  // N adalah jumlah energi yang bisa diubah oleh Boy Dper Bhagaskoro
  // terus nilai N ini dikasi 2 dikurangi 1 dan jumlahnya dijadikan masukan
  
  int n, totalEnergiDiserap, i;
  cin >> n;

  const int max = n*2-1;
  // implementasi constraint,
  // kalau tidak sesuai maka diulangi
  if((n >= MIN_ENERGI) && (n <= MAX_ENERGI)){
    int allEnergi[max];
    
    // Looping input Energi
    for (i = 0; i < max; i++){
      cin >> allEnergi[i];
    }

    // Sort Ascending
    sort(allEnergi, allEnergi+max );

    for (i = 0; i < max; i++){
      if ((allEnergi[i] < 0) && (n>0)) {
        allEnergi[i] = abs(allEnergi[i]);
        n--;
      }
      totalEnergiDiserap += allEnergi[i];
    }

    if(totalEnergiDiserap < MAX_TOTAL_ENERGI) {
      cout << totalEnergiDiserap;
    } else {
      cout << "Batasan jumlah energi yang diperbolehkan adalah 10.000" << endl;
      return 0;
    }

  } else {
    cout << "Batasan energi(baris pertama) antara 2 sampai 1.000" << endl;
    return 0;
  }

  return 0;
}