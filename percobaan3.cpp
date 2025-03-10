#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int sum = 0;

    do {
        cout << "Masukkan angka: ";
        cin >> n;
        sum += n;
    } while (n >= 0);

    cout << "Hasil penjumlahan: " << sum << endl;
    return 0;
    }