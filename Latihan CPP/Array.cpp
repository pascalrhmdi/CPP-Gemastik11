#include <bits/stdc++.h>

using namespace std;

int main()
{
  int jumlahAngka; cin >> jumlahAngka;

  int array[jumlahAngka];

  for(int i=0; i<jumlahAngka; i++) 
    cin >> array[i];

  for(int i=jumlahAngka-1; i>= 0; i--)
    cout << array [i] << " ";
    
  return 0;
}