#include <bits/stdc++.h>

using namespace std;

main() {

  int array[10] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
  int sum;

  for (int i : array) {
    sum += i;
  }

  cout << sum;
  return 0;
}