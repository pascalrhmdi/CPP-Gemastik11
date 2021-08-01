#include <bits/stdc++.h>

using namespace std;

main(){
    int n; cin >> n;
    int array[n];
    int i, max = 0;

    for (i=0; i<n; i++) {
        cin >>array[i];
        if ( array[i] > max ) max = array[i];
    }

    cout << "So, the max  value of this array is " << max << endl;
    return 0;
}