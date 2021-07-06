#include <iostream>

using namespace std;

int main()
{
    bool isAku = true;

    // di C++ berlaku juga yang namanya truthy falsy
    // berlaku true bila nilainya tidak sama dengan 0
    int isPositiveTrue = -1; 
    // atau isPositiveTrue = 12;
    if (isAku) {
        cout << "Aku True" << endl;
    }

    // ini akan dieksekusi
    if (isPositiveTrue) {
        cout << "isPosititive True" << endl;
    }
}
