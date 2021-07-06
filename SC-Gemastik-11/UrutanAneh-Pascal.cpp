#include <bits/stdc++.h>

using namespace std;

const int MIN_N = 2;
const int MIN_X = 0;
const int MAX_X = 100;
const int MAX_N = 1000;

int main() {
  int n; cin >> n;
  int temp[n], i, i2;
  vector <int> x;

// 1 3 2 5 4 15 13 12 11 14
// 1 11 2 12 3 13 4 14 5 15

  if (n>=MIN_N && n<=MAX_N)
  {
    for(i=0; i<n; i++){
      cin >> temp[i];
      // Pastikan bilangan input antara 0-100
      // Jika outOfRange maka gagalkan
      if (temp[i]<0 && temp[i] >100){
        cout << "Input bilangan 0-100"<< endl;
        return 0;
      } 
    }

    sort(temp, temp+n);
    
    for(i=0; i<n; i++) {
      for (i2=0; i2<n; i2++) {
        if (temp[i2] % 10 == i) x.push_back(temp[i2]);
      }
    }
  }

  for(i=0; i<n; i++) cout << x[i] << endl;
  
  return 0;
}